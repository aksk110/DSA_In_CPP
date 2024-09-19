#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
    vector<int>v;
    ifstream fin; // input file se lete hai apka bhai 
    fin.open("arr.txt");
    int c;
    while(fin>>c){
        v.push_back(c);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());

    ofstream fout; // output ya write aur bhejte hai file ko 
    fout.open("arr.txt");
    fout<<endl;
    fout<<" sorted data"<<endl;
    for(int i=0;i<v.size();i++){
        fout<<v[i]<<" ";
    }
    fout.close();


}