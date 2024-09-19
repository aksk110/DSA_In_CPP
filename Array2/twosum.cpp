#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int x=3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<i<<" "<<j<<endl;
            }
        }
    }

}
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     int x = 3;

//     // Adding elements to the vector
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(3);
//     v.push_back(4);

//     // Finding pairs of indices whose corresponding values add up to x
//     for (int i = 0; i < v.size(); i++) {
//         for (int j = i + 1; j < v.size(); j++) {
//             if (v[i] + v[j] == x) {
//                 cout << i << " " << j << endl;
//             }
//         }
//     }

//     return 0;
// }
