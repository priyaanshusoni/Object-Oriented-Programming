//mix of two or more than two type of inheritance 
#include<iostream>

using namespace std;

class Student{
public:

void print(){
    cout<<"I am Student"<<endl;
}





};





class Male{
    public:
    void Maleprint(){
        cout<<"I am male\n";
    }
};

class FeMale{
    public:
    void FeMaleprint(){
        cout<<"I am female\n";
    }
};

class Boy: public Student,public Male{
public:

void print(){
    cout<<"I am Boy\n";
}
};


class Girl: public Student, public FeMale
 {
public:

void print(){
    cout<<"I am Girl\n";
}
};


int main(){
    Girl G1;

 G1.print();
    
}


















