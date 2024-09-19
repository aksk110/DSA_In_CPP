#include<iostream>
using namespace std;

class morsecode{
    public:
        morsecode(string str){
            for(int i=0;i<str.size();i++){
                cout<<morse(str[i])<<" ";
            }
        }
        string morse(char a){
            switch (a){

                case 'A':
                    return ".-";
                case 'B':
                    return "-...";
                case 'C':
                    return "-.-.";
                case 'D':
                    return "-..";
                case 'E':
                    return ".";
                case 'F':
                    return "..-.";
                case 'G':
                    return "--.";
                case 'H':
                    return "....";
                case 'I':
                    return "..";
                case 'J':
                    return ".---";
                case 'K':
                    return "-.-";
                case 'L':
                    return ".-..";
                case 'M':
                    return "--";
                case 'N':
                    return "-.";
                case 'O':
                    return "---";
                case 'P':
                    return ".--.";
                case 'Q':
                    return "--.-";
                case 'R':
                    return ".-.";
                case 'S':
                    return "...";
                case 'T':
                    return "-";
                case 'U':
                    return "..-";
                case 'V':
                    return "...-";
                case 'W':
                    return ".--";
                case 'X':
                    return "-..-";
                case 'Y':
                    return "-.--";
                case 'Z':
                    return "--..";
                case ' ':
                    return "/";
                
            }
        }
};

int main(){

    string str;
    cout << "Enter the String  ";
    getline(cin,str);
    morsecode m1(str);
    
    
  
    return 0;
}