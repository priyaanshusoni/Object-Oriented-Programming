#include<iostream>

using namespace std;

class Fruit{

    public: //access specifier
    string name;
    string color;

};

class Student{
    string name;
    int roll_no;

};


int main(){
    
  // creating object of fruit class 

  Fruit Apple;
  Apple.color="red";
  Apple.name="Apple";

  cout<<Apple.color<<endl<<Apple.name<<endl;

 //Another way of desfining an object 

 Fruit*mango = new Fruit();

 mango->name="Mango";
 mango->color="yellow";

 cout<<mango->name<<endl;



}