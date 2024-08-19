//wrapping up of data & information in a single unit , while controlling access to them.

//data hiding = encapsulation 

#include<iostream>

using namespace std;

class Customer{
  string name;
  int acc_no , balance ;

  public: 
  Customer(string name , int acc_no , int balance){
      this->name = name;
      this->acc_no = acc_no;
      this->balance = balance;
  }


  void display(){
      cout<<name<<" "<<acc_no<<" "<<balance<<endl;
  }

  void deposit(int amount){
    if(amount>0)
      balance+=amount;

      else cout<<"invalid amount"<<endl;
  }
};
int main(){
    Customer c1("Tanu" , 3424453 , 43000);
    c1.display();
    c1.deposit(20000);
    c1.display();
    c1.deposit(-32000);
    c1.display();


}