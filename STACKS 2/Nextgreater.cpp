// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;

// vector<int> Nextgreater(stack<int> &st){
//     vector<int> arr;
//     stack<int> temp;
//     while(st.size() > 0){
//         if(temp.size()!=0){ while(temp.size() > 0){
//             st.push(temp.top());
//             temp.pop();}
//         }
//         if(st.size()==1) arr.push_back(-1);
//         int x=st.top();
//         st.pop();
        
//             while(st.size() > 0){
//                 if(x<st.top()){
//                   arr.push_back(st.top());
//                   break;
//                 }
//                 temp.push(st.top());
//                 st.pop();
//                  if(st.size()==0){
//                     arr.push_back(-1);
//                  }
//            }
//            if(st.size()==0){
//             while(temp.size() > 0){
//               st.push(temp.top());
//               temp.pop();
//             }
//            }
           
//     }
//     return arr;
// }

// int main(){
//     int n;
//     cout<<" enter the size of an array ";
//     cin>>n;
//    vector<int> v(n);
//    for(int i=0;i<v.size();i++){
//     cin>>v[i];
//    }
//    stack <int> st;
//    for(int i=v.size()-1;i>=0;i--){
//       st.push(v[i]);
//    }
// //    cout<<st.size()<<endl;
//   vector<int> ans  = Nextgreater(st);
//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<"  ";
//   }
// }

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<char> Postfix(stack<char> & st){
     vector <char> ans;
     stack <char> temp;
     while(st.size() > 0){

           if(st.top()=='('){
            temp.push(st.top());
            st.pop();
           }
           else if(st.top() != '(' || st.top() != ')' || st.top()!='*' ||st.top() != '/' || st.top() != '-' ||st.top() != '+' || st.top()!='^' ){
            ans[st.top()];
            st.pop();
           }
           else if(st.top()=='-'){
              if(temp.top()== '*' ||  temp.top()== '/' || temp.top()== '+' || temp.top()=='-' ){
                ans.push_back(temp.top());
                temp.pop();
              }
              temp.push(st.top());
                st.pop();   
            }
            else if(st.top( )== '+'){
                 if(temp.top()== '*' ||  temp.top()== '/' || temp.top()== '+' || temp.top()=='^'){
                    ans.push_back(temp.top());
                    temp.pop();
                 }
                    temp.push(st.top());
                    st.pop();
            }
            else if(st.top() == '/'){
                if(temp.top()== '*' ||  temp.top()== '/' || temp.top()=='^' ){
                    ans.push_back(temp.top());
                    temp.pop();
                }
                temp.push(st.top());
                st.pop();

            }
            else if(st.top()== '*'){
                 if(temp.top()== '*' ||  temp.top()== '/' || temp.top()=='^' ){
                    ans.push_back(temp.top());
                    temp.pop();
                }
                temp.push(st.top());
                st.pop();
            }
            else if(st.top()!=')'){
                while(temp.top()!='('){
                    if(temp.top()== '*' ||  temp.top()== '/' || temp.top()== '+' || temp.top()=='^'){
                        ans.push_back(temp.top());
                        temp.pop();
                    }
                }
                temp.pop();
                
            }
     }
     return ans; 

}
int main(){
   int n;
   cout<<" Enter the size : ";
   cin>>n;
   vector<char> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<int> c;
   stack<char> st;
   if(arr[n-1]!=')') st.push(')');
   for(int i=n-1;i>=0;i++){
      st.push(arr[i]);
   }
  vector<char> p=Postfix(st);
  cout<<p.size()<<endl;
  for(int i=0;i<p.size();i++){
    cout<<p[i]<<"  ";
  }


  
}
