//used to initialize the object

//it is a function that is called when the object is created

// same name as the class name 

/* 

Types of Constructor 

1. Default 

2. Parameterized 

3. Copy constructor

*/

#include<iostream>

using namespace std;

class Rectangle {
    public:
    int l;
    int b;

    Rectangle(){  // Default Constructor --> No arguments are passed 
        l = 0;
        b = 0;
    }

    Rectangle(int x , int y) {  // parametrized constructor
        l = x;
        b = y;
    }



    Rectangle(Rectangle&r){   // Copy constructor --> Initialize an object by another existing object 
     l=r.l;
     b=r.b;
    }
};

int main(){

    Rectangle r1;
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;

    Rectangle r2(4,4);

    cout<<r2.l<<endl;
    cout<<r2.b<<endl;







    Rectangle r3 = r2;
    cout<<r3.l<<endl;
    cout<<r3.b<<endl;
    
}