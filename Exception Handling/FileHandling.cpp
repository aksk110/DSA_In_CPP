#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // // file ko open krna phelhe 
    // ofstream fout; // ye apki fle ko open karega phehe yadi file 
    // // hui to open krege nhi hui to create krlega;
    // fout.open("zoom.txt"); // fout ek object hai;
    // fout<<" hello india "; // ye usme write kr rhe ho aap

    // fout.close(); // resources release kr pau me ;

    ifstream fin;// read krne ke liye file input 
    
    fin.open("zoom.txt");
    // read the file
    string c;
    c=fin.get();
    while(!fin.eof()){
        c=fin.get();   
        cout<<c;
        // c=fin.get();
    }




}