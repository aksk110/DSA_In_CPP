// They are attributes of classes or class member
#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no, balance;
    // static int total_customer;                 // access without using class

    static int total_customer;
    static int total_balance;

public:
    // static int total_customer;

    customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    static void accestatic()
    {
        cout <<"total no. of customer: "<< total_customer << endl;
        cout<<"total balance: "<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }
    void display()
    {
        cout << name << "  " << acc_no << " " << balance << " " << total_customer<<"  " <<total_balance<<"  "<< endl;
    }
    void display_total()
    {
        cout << "total customer: " << total_customer << endl;
    }
};
int customer::total_customer = 0;
int customer::total_balance = 0;

int main()
{
    customer A1("Rohit", 1, 1000);
    customer A2("Mohit", 2, 1800);
    A1.display();
    A2.display();
    A2.display_total();
    customer A3("Mohan", 3, 2000);
    A3.display();
    A2.display_total();

    // customer::total_customer=0;
    A1.display_total();

    customer::accestatic();

    A1.deposit(800);
    customer::accestatic();

    A2.withdraw(500);
    customer::accestatic();
}