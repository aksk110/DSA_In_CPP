#include<iostream>
using namespace std;
int main() {
    int x=5,y;
    int* p=&x;
    // y=++(*p);
    y=(*p)++;
    cout<<x<<" "<<y;

}