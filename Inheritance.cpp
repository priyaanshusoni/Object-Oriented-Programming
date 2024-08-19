#include<iostream>

using namespace std;

class Human{

    string Religion , color;

    // protected:
    protected:
    string name;
    int age;
    int weight;
   
   

};

class Student: private Human{
 int rollNo , fees;

 public:
// void fun (string n, int a , int w){
//     name=n;
//     age =a;
//     weight=w;

//     cout<<name<<" "<<age<<" "<<weight<<" "<<endl;
//  }

Student(string name , int age , int weight , int rollNo , int fees){
this->age=age;
this->fees=400000;
this->rollNo=rollNo;
this->weight=weight;
this->name=name;

cout<<name<<age<<weight<<rollNo<<fees<<endl;
}

};


int main(){

    Student A("Priyanshu", 19, 67, 21,40000);

    
  



    
    





  

   


    return 0;

}