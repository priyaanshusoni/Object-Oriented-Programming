#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // file open 

    //write 

    int arr[5];
    cout<<"Enter the Input "<<endl;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

      
    ofstream fout;

    fout.open("zero.txt");


    for (int i = 0; i <5; i++)
    {
        fout<<arr[i]<<" ";
    }


    fout.close();
    





    
}