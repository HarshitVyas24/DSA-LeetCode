#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
   cout <<"----------QUESTION 1---------------"<<endl;
   int x = 2 , y = 5;
   
   int exp1 = (x*y / x); //5
   
   int exp2 = (x*(x/y)); //0
   
   cout<<"exp1 = "<<exp1<<endl;
   cout<<"exp2 = "<<exp2<<endl;
   
   cout <<"----------QUESTION 2---------------"<<endl;
   
   x = 10 , y = 5;
   
   exp1 = (y*(x/y+x/y)) ; //20
   exp2 = (y*x/y+y*x/y) ; //10+10=15
   cout<<"exp1 = "<<exp1<<endl;
   cout<<"exp2 = "<<exp2<<endl;
   
   cout <<"----------QUESTION 3---------------"<<endl;
 
   x = 200, y = 50; 
   int z = 100; 
    if(x > y && y > z){  //0 && 0 ---> 0
        cout << "Hello \n"; 
    } 
 
 
    if(z > y && z < x){ //1 && 1 ---> 1
        cout << "C++ \n"; 
    } 
 
 
    if((y+200) < x && (y+150) < z){ //0 && 0 ---> 0 
        cout << "Hello C++ \n"; 
        
    }



   return 0 ;
}