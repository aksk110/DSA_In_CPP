#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="leetcode";
    vector<int>arr(26,0);
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ascii=int(ch);
        arr[ascii-97]++;
    }
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>count){
            count=arr[i];
        }   
    }
    for(int i=0;i<26;i++){
        if(arr[i]==count){
            int ascii=i+97;
            char ch=char(ascii);
            cout<<ch<<" "<<count;
        }

    }
        
}   