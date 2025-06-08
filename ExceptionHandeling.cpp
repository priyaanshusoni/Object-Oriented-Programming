#include<iostream>

using namespace std;
class Customer{

   string name;
   int balance,account_number;

   public:

   Customer(string name , int balance, int account_number){
    this->name=name;
    this->balance=balance;
    this->account_number=account_number;

   };

   //deposit 
   void deposit(int amount){
    balance+=amount;
    cout<<amount<<" is credited Succesfully"<<endl;
   }

   //withdraw 
   void withdraw(int amount){
    if(amount<=balance){
        balance-=amount;
        cout<<amount<<" is withdrawn successfully"<<endl;
    }

    else {
        throw "Your Balance is low";
    }
   }

};
int main(){
    Customer C1("Rohit",5000,10);
   try
   {
    C1.deposit(700);

    C1.withdraw(500);

    C1.withdraw(6000); //try catch block use karne ka ye faayda h ki ye if else block ki trh programe ka execution stop nahi krta balki error hone k baad next line se execution krna start kr deta hai.

   }
   catch(const char* e)
   {
    cout<<"Exception Occured "<<e<<endl;;
   }

   try{

    C1.deposit(100);
   }catch(const char *e){
    cout<<"NULL";
   }
   
}