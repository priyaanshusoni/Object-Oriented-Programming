#include<iostream>

using namespace std;

class Customer{
public:
    string name;
    int account_no;
    int balance;
    bool isActive;

    Customer(string name , int accout_no , int balance , bool active){
        this->account_no=account_no;
        this->balance=balance;
        this->name=name;
        this->isActive=active;
        cout<<name<<" "<<account_no<<" "<<balance<<" "<<isActive<<endl;
    }

    void deposit(int amount){
        balance+=amount;
    }

    void withdraw(int amount){
        balance-=amount;
    }

    void account_balance(){
        cout<<(double)balance<<endl;
    }


    void printdetails(){
        cout<<name<<" "<<account_no<<" "<<balance<<" "<<isActive<<endl;
    }


    void transfer_amount(int amount, Customer& c2){
        c2.balance+=amount;
        balance-=amount;
    }



};
int main(){
    Customer c1("Vaishali" , 3424453 , 43000 , true);
    c1.deposit(1000);
    cout<<c1.balance<<endl;
    c1.withdraw(2000);
    cout<<c1.balance<<endl;

    c1.account_balance();

    c1.printdetails();


    Customer c2=c1;
    c2.transfer_amount(3000,c1);
    cout<<c1.balance<<endl;
    cout<<c2.balance<<endl;




}