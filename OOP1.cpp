#include<iostream>
 using namespace std;

class Teacher
{

     private:
    double salary;
 
    public:
   
  //properties 
  string name;
  string department;
  string subject;
     
 

  //methods //member functions 

  void changeDepartment(string newDept){
    department = newDept;

  }

  void setSalary(double newSalary){
    salary = newSalary;
  }

double getsalary(){
    return salary;
}

};



   
int main(){
    Teacher t1;
    Teacher t2;
   
   t1.name="Priyanshu";

   t1.department="IT";

   t1.setSalary(90000);

   t1.subject="C++";

cout<<t1.name<<" "<<t1.getsalary()<<" "<<t1.subject<<" "<<t1.department<<endl;
  
  
}