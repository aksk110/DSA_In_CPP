#include<iostream>
using namespace std;
class Shape{
public:
    double x;
    double y;
    void getdata(double x, double y){
        this->x=x;
        this->y=y;
    }
    
       virtual void display_area(){
            cout<<0;
       }

};
class Rectangle: public Shape {
public:
     void  display_area() {
     cout<< " the area of rectangle "<<x*y<<endl;
    
     
   }
};
class Triangle: public Shape{
    public: 
       void display_area(){
        cout<<" the area of triangle "<<(x*y)/2<<endl;
       }

};
class Circle: public Shape{
    public:
       void display_area() {
        cout<<" the area of Circle "<<(3.14)*x*x<<endl;
       }


};
 int main(){
    
    Shape s ;
    s.getdata(6,7);
    Rectangle r1;
    r1.getdata(6,7);
    r1.display_area();
    Triangle t;
    t.getdata(6,7);
    t.display_area();
    Circle c;
    c.getdata(9,0);
    c.display_area();
    cout<<s.x;
 }