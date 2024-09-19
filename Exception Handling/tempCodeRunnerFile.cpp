#include<iostream>
using namespace std;

int main(){
    int a,b;
     cin>>a>>b;
    try
    { 
     if (cin.fail())
      throw "invalid input";   
     if(b==0)
     throw " Not posible ";
      int c=a/b;
       cout<<c<<endl;
    }
    catch( const exception &e){
        cout<<" exception occured: "<<e.what();
    }
    catch(...){
        cout<<" other exception occured";
    }
}