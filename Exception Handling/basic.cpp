#include<iostream>
using namespace std;
class Customer{
    string name;
    int balance,account_number;

    public:
    Customer(string name,int balance,int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }
     void deposite(float amount){
             if(amount>0){
             balance+=amount;
             cout<<" the Amount is credit successfully, balance avl is"<<balance<<endl;
             }
             else{
                throw runtime_error (" enter amount geater than 0");
             }
     }

     void withdraw(float amount){
        if(amount>0 && amount<balance){
            balance-=amount;
        cout<<" The available balance is "<<balance<<endl;
        }
        else if (amount < 0){
            throw runtime_error (" enter amount grater than 0");
        }
        else{
            throw runtime_error ("Your balance is Low  ");
        }
     }
};

int main(){
   Customer c1(" ram",5000,12345);
   try{
    c1.deposite(400);
    c1.withdraw(100);
    c1.withdraw(6000);// yaha exception use ho raha hai apka 
    c1.deposite(1000);
    } catch(const runtime_error  &e){
        cout<<"  exception Occured : "<<e.what()<<endl;
    }
    catch(...){
        cout<<" other exception occured ";
    }
}
