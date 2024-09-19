#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> merge(vector<int> &u,vector<int>&v,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<u.size()  && j< v.size()){
        if(u[i]<=v[j]){
         res[k]=u[i];
            i++;
            k++;
        }
        else{
         res[k]=v[j];
            j++;
            k++;
        }
    }
    if(i==u.size()){
        while(j<v.size()){
            res[k]=v[j];
            j++;
            k++;
        }
    }
    else {
        while(i<u.size()){
            res[k]=u[i];
            i++;
            k++;
        }
    }
    return res;

    
    
}
void mergeSort(vector<int>&v){
    int n =v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-(n/2);
    vector<int>a(n1);
    vector<int>b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
  int x=8;
  vector<int>v(x);
  for(int i=0;i<x;i++){
    cin>>v[i];
  }
  mergeSort(v);
  for(int i=0;i<x;i++){
    cout<<v[i]<<" ";
  }

    
}





// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> merge(vector<int> &u, vector<int>&v, vector<int>&res){
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i < u.size() && j < v.size()){
//         if(u[i] <= v[j]){
//             res[k] = u[i];
//             i++;
//             k++;
//         } else{
//             res[k] = v[j];
//             j++;
//             k++;
//         }
//     }
//     while(j < v.size()){ // Change if to while
//         res[k] = v[j];
//         k++;
//         j++;
//     }
//     while(i < u.size()){ // Change if to while
//         res[k] = u[i];
//         i++;
//         k++;
//     }
//     return res;
// }

// void mergeSort(vector<int>&v){
//     int n = v.size();
//     if(n <= 1) return; // Change n==1 to n<=1
//     int mid = n / 2; // Change n1 to mid
//     vector<int> a(mid);
//     vector<int> b(n - mid); // Change n2 to n - mid
//     for(int i = 0; i < mid; i++){
//         a[i] = v[i];
//     }
//     for(int i = 0; i < n - mid; i++){
//         b[i] = v[i + mid];
//     }
//     mergeSort(a);
//     mergeSort(b);
//     merge(a, b, v);
// }

// int main(){
//     int x = 8;
//     vector<int> v(x);
//     for(int i = 0; i < x; i++){
//         cin >> v[i];
//     }
//     mergeSort(v);
//     for(int i = 0; i < x; i++){
//         cout << v[i] << " ";
//     }
   
// }


