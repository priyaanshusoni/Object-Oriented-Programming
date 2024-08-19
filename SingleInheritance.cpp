#include<iostream>

using namespace std;

class Human{
 protected:

 string name;
 int age;

 public:

 Human(int age){
    this->age=age;
    cout<<"Human age is"<<age<<endl;
 }
 Human(){
    cout<<"I am Human"<<endl;
 }

 void work(){
    cout<<"I am working"<<endl;
 }

 void display(){
cout<<"HUman Display"<<endl;
 }

~Human(){
    cout<<"Human Destructor"<<endl;
}



};

class Student: public Human{
    int roll_no,fees ;
    public:
  
    Student(string name , int age , int roll_number,int fees): Human(age){
   this->name=name;
   this->age=age;
   this->roll_no=roll_no;
   this->fees=fees;

    }

      Student(){
        cout<<"I am Student"<<endl;
    }

    ~Student(){
        cout<<"Student Destructor"<<endl;
    }


    void display(){
        cout<<"Student Display"<<endl;
    }


};
int main(){
//     Student A1("priyanshu", 26,32,99);

 Student A2;

 A2.display();

 // display function dono class m saem h so jiska bhi object call kia h sabse pahle compiler uss class m dekhega agr usme function nahi mila to parent class m jAAEGA JESE agr student classs  main display function nahi milta toh Human class m check krta .
}