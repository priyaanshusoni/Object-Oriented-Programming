#include<iostream>

using namespace std;
class Engineer{
    public:
    string Specialization;


    
    Engineer(){
        cout<<"Hello Engineer"<<endl;
    }

    void work(){
        cout<<" I have specialization in "<<Specialization<<endl;
    }

};

class Youtuber
{
    public:

    Youtuber(){
        cout<<"Hello Youtuber"<<endl;
    }

    int subscribers;

    void contentcreator(){
        cout<<" I have a subscriber base of"<<subscribers<<endl;
    }

};

class CodeTeacher: public Youtuber , public Engineer{
public:
string name;
CodeTeacher(string name , string Specialization , int subscribers ){
    this->name=name;
    this->subscribers=subscribers;
    this->Specialization=Specialization;
}

void showcase(){
    cout<<" my name is"<<name<<endl;
    work();
    contentcreator();


}

};
int main(){
    CodeTeacher A1("Rohit","CSE",656000);

    A1.showcase();




}