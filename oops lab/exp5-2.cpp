#include<iostream>
using namespace std;
void test(int x){
    try{
     if(cin.fail()){
            throw runtime_error ("invalid input data type");
        }

     if(x==0){
        throw runtime_error("integer exception");
    }
     if(x==1){
        throw runtime_error("char exception");
    }
     if(x==-1){
        throw runtime_error(" double exception");
    }
    }
    catch(exception &e ){
        cout<<""<<e.what()<<endl;
    }
    catch(...){
            cout<<" exception"<<endl;
        }
}
int main(){
    int n;
    cout<<" enter the number ";
    cin>>n;
    test(n);

}