#include <iostream>
using namespace std;

class customer
{
// public:
    string name;
    int acc_no, balance;

    public:
    customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        cout<<"Invalid amount."<<endl;
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        }
    }
    void display()
    {
        cout << name << "  " << acc_no << " " << balance << " " << endl;
    }
};

int main()
{
    customer A1("Rohit", 1, 1000);
    customer A2("Mohit", 2, 1800);
    customer A3("Mohan", 3, 2000);
    // A1.balance+=-10;
    A1.deposit(-10);
    A1.display();
    A2.display();
    A3.display();
}