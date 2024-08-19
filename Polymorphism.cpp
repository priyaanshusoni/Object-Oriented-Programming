//many forms 

  // function overloading 
  #include<bits/stdc++.h>
  

  using namespace std;

  class Area{
    public:
  int  calcarea(int r){  //circle
        return 3.14*r*r;
    }


    int calcarea(int l, int b){   //rectangle 
        return l*b;
    }




  };

  int main(){

   Area a1,a2;
   cout<<a1.calcarea(4)<<endl;

   cout<<a2.calcarea(3,4)<<endl;

   




    return 0;




  }