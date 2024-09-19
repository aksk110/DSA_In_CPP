#include<iostream>
using namespace std;


// function overloading
class area
{
    public:
    int calculatearea(int r)   //area of circle
    {
        return 3.14 *r*r;
    }
    int calculatearea(int l,int b)     // area of rectangle
    {
        return l*b;
    }
};

int main()
{
    area A1,A2;
    cout<<A1.calculatearea(4)<<endl;
    cout<<A2.calculatearea(3,4)<<endl;
    //cout<<A2.calculatearea("abhi")<<endl;
}