#include<iostream>
#include<vector>
using namespace std;
class queue{
public:    
    vector<int> v;
    queue(){

    }
    void push(int val){
        v.push_back(val);
    }
    
    void pop(){
        for(int i = 0 ; i<v.size()-1;i++){
            v[i]=v[i+1];
        }
        v.resize(v.size()-1);  
    }
    void front(){
        cout<<v[0]<<endl;
    }
    
    void back(){
        cout<<v[v.size()-1]<<endl;
    }
    void display(){
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
      }
      cout<<endl;
    }
    void size(){
        cout<<v.size();
    }
    void empty(){
        if(v.size()==0) cout<<true;
        else cout<<false;
    }

};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();
    q.pop();
    q.display();
    q.size();
    q.back();
    
}