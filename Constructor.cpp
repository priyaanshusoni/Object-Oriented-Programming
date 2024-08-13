#include<iostream>

using namespace std;

 class Teacher{
    public:


         string name ;
        string dept ;
        string subject;
        double salary ;
    // non-parameterized constructor
    Teacher(){
     dept = "IT";
    }
// parameterized constructor
    Teacher(string n , string d , double sal , string sub){
         name = n;
         dept = d;
        subject = sub;
        salary = sal;
    }
 };
int main(){
   
   Teacher t1;
//    cout<<t1.dept<<endl;


   Teacher t2("Priyanshu" , "IT" , 90000 , "C++");


cout<<t2.name<<" "<<t2.dept<<" "<<t2.salary<<" "<<t2.subject<<endl;


   
    //Constructor is a special method or function invoked automatically at time of object creation. Used for initialisation .
//1. Same name as class
//2. Constructor does not have a return type
//3. Only called once(automatically) , at object creation 
//4. Memory allocation happens when constuctor is called 





}