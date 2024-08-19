#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main(){


ofstream fout;

fout.open("three.txt");
fout<<"Write done"<<endl;
fout<<"Write done 2"<<endl;
fout<<"Write done 3"<<endl;


fout.close();


ifstream fin;
fin.open("three.txt");

// char c = fin.get();

// while(!fin.eof()){
//     cout<<c;
//     c=fin.get();
// }

string line;


while (getline(fin,line))
{ //getline(fin,line)=> read whole string line by lne and put it into line(string)

cout<<line<<endl;


}

fin.close();





}