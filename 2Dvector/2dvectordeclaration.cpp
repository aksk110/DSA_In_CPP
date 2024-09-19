#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(5,3);
    // for(int i=0;i<v.size();i++){ // output 3 3 3 3 3
    //     cout<<v[i]<<" ";
    // }
    vector<vector<int>> v(4,vector<int>(3)); // iska mtlb hai apka 
    // 2 d vector ki size hai apki 4 aur har index me 3 
    // evctor size stor hogi.
    // vector<vector<int>> v(4,vector<int>(3,2));
    // mtlb apka 4 size ka 2d vector hai aur har vector like
    // coloumn apka 3 hai aur har me apka 2 valuue hai 
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<v[0].size();
    

}