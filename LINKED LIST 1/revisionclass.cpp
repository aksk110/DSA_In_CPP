#include <iostream>
using namespace std;
class student{
public:        
    string name;
    int age;
    float marks;
    student(string name,int age ,float marks){
       this-> name=name;
       this-> age=age;
       this-> marks=marks;
    }
    void change(student*p){
        p->name="Aks";
    }
    void printx(){
        cout<<name<<"  "<<age <<"  "<<marks<<endl;
    }
};
int main(){
//     student s1(" k",19,90.4);
//     student* ptr=&s1;
//     (*ptr).printx(); //ptr->printx();
//     ptr->change(&s1);
//     ptr->printx();
   // dynamic allocation 
   student *ptr=new student(" k",19,90.4);
   ptr->printx();

}
