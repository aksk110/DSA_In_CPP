#include <iostream>
using namespace std;

class human
{
    string religion, color;
    // if private then can not access
    // protected:                   // can not access bcz name treat as protected and cannot access
    // public:
    // protected:
    // private:
public:
    string name;
    int age, weight;
};

class student : private human
{
private:
    int roll_number, fees;

public:
    void fun(string a, int b, int w)
    {
        name = a;
        age = b;
        weight = w;
    }

    student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }
    void display()
    {
        cout << name << " " << age << "  " << weight << " " << roll_number << " " << fees << endl;
    }
};

class teacher:public human
{
    int salary,id;
};

int main()
{
    student A("rohit", 18, 55, 5, 500);
    A.display();
    // A.name="rohit";
    // A.fun("Abhi",18,55);
    // A.display();

    teacher B;
    B.name="Mohit";
}