#include <iostream>
using namespace std;

class student
{
public:
    void print()
    {
        cout << "I am student \n";
    }
};
class male
{
public:
    void maleprint()
    {
        cout << "I am male \n";
    }
};
class female
{
public:
    void femaleprint()
    {
        cout << "I am female \n";
    }
};

class boy : public student, public male
{
public:
    void boyprint()
    {
        cout << "I am boy \n";
    }
};

class girl : public student, public female
{
public:
    void girlprint()
    {
        cout << "I am girl \n";
    }
};

int main()
{
    girl G1;
    G1.girlprint();
    G1.print();

    boy B1;
    B1.maleprint();
}