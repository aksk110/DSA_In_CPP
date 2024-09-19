#include <iostream>
using namespace std;

class human
{
    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};

class engineer:public virtual human
{
public:
    string specilization;

    void work()
    {
        cout << "I have specialization in " << specilization << endl;
    }
    // engineer()
    // {
    //     cout << "hello engineer \n";
    // }
};

class Youtuber:public virtual human
{
public:
    int subscribers;

    void contentcreator()
    {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
    // Youtuber()
    // {
    //     cout << "hello youtuber \n";
    // }
};

class CodeTeacher : public engineer, public Youtuber
{
public:
    int salary;

    CodeTeacher(string name, string specilization, int subscribers,int salary)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscribers;
        this->salary=salary;
    }

    // void showcase()
    // {
    //     cout << "My name is " << name << endl;
    //     work();
    //     contentcreator();
    // }
    CodeTeacher()
    {
        cout << "Hlo codeteacher \n";
    }
};

int main()
{
    CodeTeacher A1("Abhi", "CSE", 15000,99);
    A1.display();
    CodeTeacher A2;
    A2.display();
}