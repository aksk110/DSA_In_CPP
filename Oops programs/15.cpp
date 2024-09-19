#include <iostream>
#include<vector>
using namespace std;

class animal
{
public:
    virtual void speak()
    {
        cout << "huhu" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "bark" << endl;
    }

    void any()
    {
        cout << "hello \n";
    }
};
class cat : public animal
{
public:
    void speak()
    {
        cout << "meow" << endl;
    }
};

int main()
{
    // animal *p;
    // p=new dog();
    // p->speak();
    // //p->any();

    // dog d1;
    // d1.speak();

    animal *q;
    vector<animal*> animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    
    // Q. sabhi ke address ko bahar nikalo and print vo kya speak karta hai
        // ans. sabhi ko compare karwana padega vo kis ka h dog ya cat (if suppose 100 child class then is become very diffuclt)

    // easy solution 

    for (int i = 0; i < animals.size(); i++)
    {
        q=animals[i];
        q->speak();
    }
    
}