#include<iostream>
#include<vector>
using namespace std;
class stack{ 
public:
    int f1;
    int f2;
    int f3;
    int size1;
    int size2;
    int size3;
    vector<int> arr;
        stack(int n1,int n2,int n3){
         arr.resize(n1 + n2 + n3);
            f1=-1;
            f2=n1-1;
            f3=n1+n2-1;
            size1=n1;
            size2=n2;
            size3=n3;
              }
        void push1(int val){
              if(f1 >= size1-1) cout<<" overflow condition : "<<endl;
              else{
                f1++;
                arr[f1]=val;
              }
        }
        void push2(int val){
            if(f2 >= size1+size2-1) cout<<" overflow condition : "<<endl; 
            else{
                f2++;
                arr[f2]=val;
                 
            }
        }
        void push3(int val){
            if(f3 >= arr.size()-1) cout<<" overflow condition : "<<endl;
            else{
                f3++; 
                arr[f3]=val;
                
            }
        }
        void pop1(){
            if(f1 < 0) cout<<" underfow condition : "<<endl;
            else{
                f1--;
            }
        }
        void pop2(){
            if(f2 <= size1-1 ) cout<<" underfow condition : "<<endl;
            else{
                f2--;
            }
        }
        void pop3(){
            if(f3 <= size1 + size2 -1) cout<<" underfow condition : "<<endl;
            else{
                f3--;
            }
        }
        void top1(){
            cout<<arr[f1]<<endl;
        }
        void top2(){
            cout<<arr[f2]<<endl;
        }
        void top3(){
            cout<<arr[f3]<<endl;
        }
        void display1(){
            for(int i=f1;i>=0;i--){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }
        void display2(){
            for(int i=f2;i >= size1;i--){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }
        void display3(){
            for(int i=f3;i >= size1+size2;i--){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }      
};  
int main(){
     stack st(4,4,8);
       st.push1(1);
       st.push1(2);
       st.push1(3);
       st.push1(4);
       st.push1(5);
       st.push1(6);
       st.display1();


}