#include <iostream>
using namespace std;

class engineer
{
public:
    string specilization;

    void work()
    {
        cout << "I have specialization in " << specilization << endl;
    }
    engineer()
    {
        cout << "hello engineer \n";
    }
};

class Youtuber
{
public:
    string subscribers;

    void contentcreator()
    {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
    Youtuber()
    {
        cout << "hello youtuber \n";
    }
};

class CodeTeacher : public engineer, public Youtuber
{
public:
    string name;

    CodeTeacher(string name, string specilization, string subscribers)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        cout << "My name is " << name << endl;
        work();
        contentcreator();
    }
    CodeTeacher()
    {
        cout << "Hlo codeteacher \n";
    }
};

int main()
{
    // CodeTeacher A1("Abhi", "CSE", "15000");
    // A1.showcase();
    CodeTeacher A2;
}