 #include<iostream>
 using namespace std;
 int main(){
    int m,n,p,q;
    cout<<"enter the m ,n,p and  q value ";
    cin>>m>>n>>p>>q;
    // a*b;
    if(n==p){
        int a[m][n];
        int b[p][q];
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
            cin>>b[i][j];
            }
        }

    //    very important 
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){  
              res[i][j]=0;
                for(int k=0;k<p;k++){ // important 
                    res[i][j]=+a[i][k]*b[k][j];             
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";

            }
            cout<<endl;
        }
    }
    else cout<<"not alllowed";

    }