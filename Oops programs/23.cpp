#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // file ko open
    ofstream fout;
    fout.open("zoom.txt"); // if file not present create kar dega fir open kar dega

    // write kar sakta hu
    fout << "Hello Abhi";

    fout.close(); // resource release kar paauon
}