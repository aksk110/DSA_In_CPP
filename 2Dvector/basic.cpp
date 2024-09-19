#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(1); //row 0
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);//row 1
    v2.push_back(5);
    vector<int>v3;
    v3.push_back(6); //row 2
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    
    vector<vector<int>>v; // is ke andar hum int nhi dal skte only vector ;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[1][1]; //5 //like 2d array 
}