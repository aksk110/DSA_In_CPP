#include <iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

    public:
    // Default constructor
    customer()
    {
        // cout<<"Hello default constructor \n"; 
        name="Abhi";
        account_number=11;
        balance=100;
    }

    // // Paramaterized constructor
    // customer(string a,int b,int c)
    // {
    //     name=a;
    //     account_number=b;
    //     balance=c;
    // }

    // // Paramaterized constructor
    // customer(string name,int account_number,int balance)
    // {
    //     this->name=name;                                // compiler confuse so use this pointer
    //     this->account_number=account_number;
    //     this->balance=balance;
    // } 

    // constructor overloading
    customer(string a,int b)
    {
        name=a;
        account_number=b;
        balance=50;                   // by default 50 insert 
    }

    // Inline constructor
    inline customer(string a,int b,int c): name(a),account_number(b),balance(c){}

    void display()
    {
        cout<<name<<"  "<<account_number<<"  "<<balance<<endl;
    }

    // copy constructor              if copy constructor create than compiler not creat 
    customer(customer &B)
    {
        name= B.name;
        account_number=B.account_number;
        balance=B.balance;
    }
};



int main()
{
    // customer A1,A2,A3;
    customer A1;
    customer A3("Rohit",25);
    customer A2("Abhi",23,100);
    A1.display();               //  Same value in A1,A2,A3
    A2.display();               //  Same value bcz they call to constructor and this assign value
    A3.display();               //  if A3 pass two value then third value garbage value 

    customer A4(A3);
    A4.display();

    customer A5;
    A5=A3;                      // assignment opertor
    A5.display();
}