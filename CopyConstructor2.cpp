#include<iostream>

using namespace std;

class Customer{
    public:
    string name;
    int account_no;
    int balance;
public:
    Customer(string name , int accout_no , int balance){
      
      this->name = name;
    this->account_no = accout_no;
      this->balance=balance;

    } //default constructor



    // Customer(string name , int accout_no){  // constructor ovrloading -> same name of function with different arguments no.
      
    //   this->name = name;
    // this->account_no = accout_no;
    

    // } //default constructor

//Copy Constructor 
Customer(Customer &B){
    name =B.name;
    account_no = B.account_no;
    balance = B.balance;
}

};
int main(){

    Customer c1( "Vaishali" , 3424453 , 43000);
  

   Customer c2(c1); // we can also use assignment operator c2 = c1;


 cout<<c2.account_no<<" "<<c2.name<<" "<<c2.balance<<endl;

   return 0;
}

