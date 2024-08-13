#include<iostream>

using namespace std;

class Customer{
    public:
    string name;
    int* balance;

    public:

    Customer(){
        cout<<"Consturctor is called"<<name<<endl;
    }

   

    Customer(string name){
        this->name = name;
        cout<<"constructor is called"<<name<<endl;
    }

    ~Customer(){ // destructor syntax = ~classname()
        cout<<"Destructor is Called"<<name<<endl; // destructor will invoke in reverse order ! why? 

        delete balance;

        // destructor function is used to free space for dynamically created items ;
     // destructor function is called when the object is destroyed
     //it is used to free memory
     //it's purpose is to avoid memory leak  





    }

};


int main(){


   






    Customer A2("1"),A3("2"),A4("3");



  Customer* A5 = new Customer("4");

  delete A5;


}