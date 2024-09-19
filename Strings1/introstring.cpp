#include<iostream>
using namespace std;
int main(){
//     char str[4]={'1','2','3','4'}; // as acharacter hoge apke 
//  for(int i=0;i<4;i++){
//     cout<<str[i]<<" ";
//  }
// char ch='\n'; // next line de deta ha apka ...
// cout<<ch;
// char ch='\0';
// cout<<ch; //null character 
// int x=int(ch);//type casting .
// cout<<x; // this is the ascii value of \0. =0


// char str[]={'a','b','c','d','e'};
// cout<<str; // abcde is output but
char str[]={'a','b','\0','c','d','e'};
cout<<str; //output is apka ab hi ha kyu ki \0 ke bad print break ho gyi 

}