#include <iostream>
using namespace std;

class human
{
    protected:
    string name;
    int age;

    public:
    void work()
    {
        cout<<" I am working \n";
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
    human()
    {
        cout<<"hello human \n";
    }
    human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    ~human()
    {
        cout<<"hello human I am destuctor\n";
    }


};

class student: public human
{
    int roll_number,fees;

    public:
    student (string name,int age,int roll_number,int fees):human(name,age)
    {
        // this->name=name;
        // this->age=age;                   #note: from here I can call constructor of human
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
    student()
    {
        cout<<"hello student \n";
    }

    ~student()
    {
        cout<<"hello student I am destuctor \n";
    }
};

int main()
{
    // student A1("Rohit",18,7,500);
    // A1.display();
    //A1.work();
    student A2;
}