#include <iostream>
using namespace std;

class student
{
private:
    public:
    string name;
    int age, roll_no;
    string grade;

public:
    void set_name(string st)
    {
        name = st;
    }
    void set_age(int n)
    {
        age = n;
    }
    void set_roll_no(int m)
    {
        roll_no = m;
    }
    void set_grade(string gr)
    {
        grade = gr;
    }
};

int main()
{
    student s1;
    // s1.name="Abhi";
    // s1.age=15;
    // s1.roll_no=11;
    // s1.grade='A';

    s1.set_name("abhi");
    s1.set_age(45);
    s1.set_roll_no(11);
    s1.set_grade("A");

    student *s = new student;
    s->name = "Abhi";
}