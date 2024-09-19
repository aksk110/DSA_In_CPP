#include <iostream>
using namespace std;

class customer
{
    string name;
    int *data;
    
    public:

    customer()
    {
        name="Rohit";
        data= new int;
        *data=10;
        cout<<"constructor is callled \n";
    }

    // destructor
    ~customer()
    {
        delete data;
        cout<<"destructor is called \n";
    }
};

int main()
{
    customer A1;
}