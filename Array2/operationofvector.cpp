#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(7);//input the element 
    v.push_back(79);
    v.push_back(72);
    v.push_back(73);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.pop_back();// delete the last element of vector 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";


}   
}
    

