#include <iostream>
using namespace std;

// // khud se nahi bna sakte
// class exception
// {
//     protected:
//     string msg;

//     public:

//     exception(string msg)
//     {
//         this->msg=msg;
//     }
//     void what()
//     {
//         return msg;
//     }
// };

// class runtime_error: public exception
// {
//     public:

//     // why make const in runtime_error bcz I want throw msg as it is I did not want to changes in throw statement
//     runtime_error(const string &msg): exception(msg)
//     {

//     }
// }

class InvalidAmountError:public runtime_error
{
    public:

    InvalidAmountError(const string &msg): runtime_error(msg)
    {}
};

class InsufficientBalanceError:public runtime_error
{
    public:

    InsufficientBalanceError(const string &msg): runtime_error(msg)
    {}
};

class customer
{
    string name;
    int balance, account_number;

public:
    customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            // // special constructor h jo without object call ho jata h
            // throw runtime_error(" amount should be greater than 0 \n"); // if throw statement run then below statement not run

            throw InvalidAmountError(" amount should be greater than 0 \n"); 
        }
        balance += amount;
        cout << amount << " rs is credited successfully \n";

        // if (amount > 0)
        // {
        //     balance += amount;
        //     cout << amount << " rs is credited successfully \n";
        // }
        // else
        // {
        //     throw " amount should be greater than 0 \n";
        // }
    }
    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rs is debited successfully";
        }
        else if (amount < 0)
        {
            // throw runtime_error("amount should be greater than 0 \n");
            throw InvalidAmountError("amount should be greater than 0 \n");
        }
        else
        {
            // throw runtime_error (" your balance is low.");
            throw InsufficientBalanceError(" your balance is low.");
        }
    }
};

int main()
{
    customer c1("Abhi", 5000, 10);
    try
    {
        c1.deposit(100);
        c1.withdraw(6000); // nothing print withdraw hua ya nahi
        c1.deposit(200);   // this is not run (if you want error occured uske baad vale statement na chle)
    }
    catch (const char *e)
    {
        cout << "Exception occured: " << e << endl;
    }
    catch (const InvalidAmountError &m)
    {
        cout << "Exception is occured: " << m.what() << endl;
    }
    catch (const InsufficientBalanceError &e)
    {
        cout << "Exception is occured: " << e.what() << endl;
    }

    // declare (runtime_error , bad_alloc) all this for make code more readable
    catch (const runtime_error &e)
    {
        cout << "Exception is occured: " << e.what() << endl;
    }
    // multiple catch block can be write


    // every exception not handle by this bcz it become very difficult to read what type of error
    catch (...) // default catch (with 3 dots ) if any of above not run then this will run
    {
        cout << "Exception occured" << endl;
    }
}

// if throw run then below statement not run of that block

// we can create our own exception class