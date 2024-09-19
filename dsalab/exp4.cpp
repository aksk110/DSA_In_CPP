#include<iostream>
using namespace std;
class Node
{  
public:     
    int rollno;
    string name;
    float cgpa;
    Node*next;
    
    Node(int rollno,string name,float cgpa){
        this->rollno=rollno;
        this->name=name;
        this->cgpa=cgpa;

    }
};
class Linkedlist{
public:    
    Node*head;
    Node*tail;
    int size;
    Linkedlist(int size){
        this->size=size;
        this->head=NULL;
        this->tail=NULL;
    }
    
    void making(){
         int x=size;
        for(int i=1;i<=x;i++){
            int rollno;
            string name;
            float cgpa;
            cout<<" student  "<<i<<" rollno,name,cgpa ";
            cin>>rollno>>name>>cgpa;
            if(head==NULL){
                head=new Node(rollno,name,cgpa);
                tail=head;
            }
            else{
                 Node*temp=new Node(rollno,name,cgpa);
                 tail->next=temp;
                 tail=temp;
            }
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->rollno<<"  "<<temp->name<<"  "<<temp->cgpa<<endl;
            temp=temp->next;
        }
    }

    void traversing(int idx){
        Node*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        cout<<temp->rollno<<"  "<<temp->name<<"  "<<temp->cgpa<<endl;
    }
    void inserting(float idx,int rollno,string name,float cgpa){
        Node*temp=head;
       Node*t=new Node(rollno,name,cgpa);
        int a=int(idx); // checking for fractional . index 
        if(idx<=0 || a!=idx || idx > size+1){
            cout<<" ERROR INVALID INDEX"<<endl;
            return;
        }
        if(idx==1){
            t->next=head;
            head=t;
            size++;
        }
        else if(idx==size+1){
            tail->next=t;
            size++;
        }
        else{
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t; 
            size++;
        }
    }

    void deleting(float idx){
        Node*ptr1=head;
        Node*ptr2=head->next;
        int a=int(idx);
        if(idx<=0 || a!=idx || idx>size){
            cout<<" ERROR INVALID INDEX"<<endl;
            return;
        }
        else if(idx==1){
            Node*temp=head;
            head=head->next;
           delete(temp);
            size--;
        }
        else{ 
            for(int i=1;i<idx-1;i++){
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            ptr1->next=ptr2->next;
            delete(ptr2);
            size--;
        }
    }    
};

int main(){
    float n;
    int rollno;
    float cgpa;
    string name;
    float idx;
    cout<<" enter the size of list ";
    cin>>n;
    Linkedlist l1(n);
    l1.making();
    while(true){
        int x;
        cout<<"*"<<endl;
        cout<<"For Insert At head : 0"<<endl;
        cout<<"For Insert At Tail : 1"<<endl;
        cout<<"For Insert At Any Position : 2"<<endl;
        cout<<"For Deletion Of Node : 3"<<endl;
        cout<<"For Deletion Of Node At head : 4"<<endl;
        cout<<"For Deletion Of Node At tail : 5"<<endl;
        cout<<"For Printing of Linked List : 6"<<endl;
        cout<<"*"<<endl;
        cin>>x;
        cout<<"*"<<endl;
        switch (x)
        {
        case 0:
            cout<<" enter rollno,name,cgpa : ";
            cin>>rollno>>name>>cgpa;
            l1.inserting(1, rollno, name, cgpa);
            break;
        case 1:
            cout<<" enter rollno,name,cgpa : ";
            cin>>rollno>>name>>cgpa;
            l1.inserting (l1.size, rollno, name, cgpa);
            break;
        case 2:
            cout<<" enter the index : ";
            cin>>idx;
            cout<<" enter rollno,name,cgpa : ";
            cin>>rollno>>name>>cgpa;
            l1.inserting (idx, rollno, name, cgpa);
            break;
        case 3:
            cout<<" enter the index : ";
            cin>>idx;
            l1.deleting(idx);
            break;
        case 4:
             l1.deleting(1);;
            break;
        case 5:
            l1.deleting(l1.size);;
            break;
        case 6:
            l1.display();
            break;
        
        default:
            cout<<"Invalid Choice";
            break;
        }
        char more;
        cout<<"*"<<endl;
        cout<<"Want more operations ? Y/N";
        cin>>more;
        cout<<"*"<<endl;
        if(more=='N'){
            break;
        }
    }
    
}