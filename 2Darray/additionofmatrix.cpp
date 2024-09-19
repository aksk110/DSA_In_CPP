// #include<iostream>
// using namespace std;
// int main(){
//     int m=3,n=3;
//     int m1[m][n];
//     int m2[m][n];
//     int m3[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>m1[i][j];
//             }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>m2[i][j];
//         }        
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){

//         m3[i][j]=m1[i][j]+m2[i][j];}
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<m3[i][j]<<" ";
//         }
//         cout<<endl;        
//     }
// }
    
// transpose 
 #include<iostream>
 using namespace std;
 int main(){
    int m=2,n=3;
    int a[m][n];
    int b[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
 }   