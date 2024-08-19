#include<iostream>
#include<fstream>


using namespace std;
int main(){
    // file open 

    //write 

    ofstream fout; //object
    fout.open("a.txt"); //open


     
     fout<<"Hello India";

     fout.close(); //release resources 


     ifstream fin; // to read data

     fin.open("a.txt");

     char c;
    c =fin.get();


     while(!fin.eof()){ // eof => end of file
        cout<<c;
        c=fin.get();
     }

     fin.close();





    
}