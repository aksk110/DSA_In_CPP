#include <iostream>
#include<exception>
using namespace std;

// class exception
// {
//     protected:
//     string msg;

//     public:

//     exception(string msg)
//     {
//         this->msg=msg;
//     }
//     void what()
//     {
//         return msg;
//     }
// };

int main()
{
    // // if else se track rakhna mushkil h ki kitni memory available h handle karna mushkil h
    // int *p = new int[1000000000000020];
    // cout <<"Memory allocation is successfull \n";

    try
    {
        int *p = new int[1000000000000020];
        cout << "Memory allocation is successfull \n";
        // did not throw khir bhi system ne automatic catch kar leta h
        delete []p;
    }
    // catch (const exception &e)
    // {
    //     cout<<"Exception occured: "<<e.what()<<endl;
    // }

    catch (const bad_alloc &e)
    {
        cout<<"Exception occured: "<<e.what()<<endl;
    }
}