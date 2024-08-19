#include<iostream>

using namespace std;

class exception {
    protected:
    string msg;

    public:
    exception(string msg){
        
        this->msg = msg;

    }

    string what(){
        return msg;
    }
};

int main(){
    // int a,b;
    // cin>>a>>b;
    // try
    // {
    //     if(b==0)
    //     throw "Division by 0 is not possible !";
    //     int c= a/b;
    //      cout<<c<<endl;
    // }

    // catch(const char*e){
    //     cout<<"Exception occured "<<e<<endl;
    // }
   

   try{
    int n;
    cin>>n;
  int *p =new int[n];
  cout<<"Memory allocation is succesful\n";
 

  delete []p;

   }
   catch(const exception& e){
    cout<<"xception Occured : "<<e.what()<<endl;;
   }


   


}