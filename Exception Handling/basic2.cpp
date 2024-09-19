#include<iostream>
using namespace std;

int main(){
    int a,b;
     cin>>a>>b;
    try
    { 
     if (cin.fail())
     throw   runtime_error("invalid input");   
     else if(b==0)
     throw  runtime_error( " Not posible ");
      int c=a/b;
       cout<<c<<endl;
    }
    catch(exception  &e){
        cout<<" exception occured: "<<e.what();
    }
    catch(...){
        cout<<" other exception occured"; 
    }
}