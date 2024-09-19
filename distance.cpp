#include<iostream>
#include<cmath>
using namespace std;
int  main() {
    float x,y,x1,y1,distance;

    cout<<"enter the first x,y,x1,y1 coordinate";
    cin>>x>>y>>x1>>y1;
   
    distance=sqrt((y1-y)*(y1-y)+(x1-x)*(x1-x));
    cout<<"the distance is "<<distance;
    return 0;

}