//they are attribute of classes or class members 
// it is declared using static keyword .

//V. imp-> static keyword sb object ke liye ek hee hota hai.
#include<iostream>

using namespace std;

class Customer{
      string name;
      int account_number , balance;
    //   int total_customer=0; // not a solution
      static int total_customer;


      public:

      Customer(string name , int account_number , int balance){
          this->name = name;
          this->account_number = account_number;
          this->balance = balance;
      total_customer++;
      }

      void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<"Total Customer is "<<total_customer<<endl;
      }
};

int Customer::total_customer = 0;
int main(){
    Customer c1("Tanu" , 3424453 , 43000);
    Customer c2("Anisha" , 3424453 , 54000);

    // c2.display();
    c1.display();
    Customer c3("abc" , 323245, 426878);
    c1.display();

    // Customer::total_customer=8;
}