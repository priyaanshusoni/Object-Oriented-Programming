#include<iostream>

using namespace std;

class Customer{
    public:
    string name;
    int account_no;
    int balance;
public:
    // Customer(string name , int accout_no , int balance){
      
    //   this->name = name;
    // this->account_no = accout_no;
    //   this->balance=balance;

    // } //default constructor



    // Customer(string name , int accout_no){  // constructor ovrloading -> same name of function with different arguments no.
      
    //   this->name = name;
    // this->account_no = accout_no;
    

    // } //default constructor



    //inline constructor
inline Customer(string a , int b , int c): name(a) , account_no(b) , balance(c){}

};
int main(){

    Customer c1( "Vaishali" , 3424453 , 43000);
    // Customer c2("Anisha", 4535434);

 cout<<c1.account_no<<" "<<c1.name<<" "<<c1.balance<<endl;
//  cout<<c2.account_no<<" "<<c2.name<<endl;


   return 0;
}

// constructot use 

// 1. to intialize value 
//2. file open 
//3. creating early access o storage for ex;- initilizing array by new int[100]