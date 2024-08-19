#include<iostream>

using namespace std;

class Animal {
    public:

    // void speak(){
    //     cout<<"huhhu\n";
    // }
  virtual  void speak(){ // vitual function makes sure that it will allocate memory at run time not at compile time 
        cout<<"huhhu\n";
    }



};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Bark\n";
    }
};


int main(){
    Animal *p;

    p= new Dog(); // ye memory run time m allocate hogi 

    p->speak(); // yha pe compile time m hee p pointer Animal wale speak function ko access kr dia 

// to avoid this we need to use virtual keyword and make function virtual so that it can decide it by itself.



}




























































































































































































