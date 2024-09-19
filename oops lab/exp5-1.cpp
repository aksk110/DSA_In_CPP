#include<iostream>
using namespace std;
class division{
public:    
    double x;
    double y;
      division ( double x,double y){
        this->x=x;
        this->y=y;
    }
    double  calculate(){
        try{
            if(cin.fail()){
                throw runtime_error (" invalid input data types ");
            }
            if (y==0){
                throw runtime_error ("not allowed ");
            }
           return x/y;
        }
        catch( exception &e){
           cout<<" exception "<<e.what()<<endl;
        }
    } 
    
                
};
int main(){
    double n1;
    double n2;
    cout<<"enter the number1 ,number2 ";
    cin>>n1>>n2;
    division d1 (n1,n2);
    double t=d1.calculate();
    cout<<t<<endl;

}