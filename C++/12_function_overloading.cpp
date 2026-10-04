#include<bits/stdc++.h>
using namespace std ; 

void sum(int a ,  int b){
    cout<<a+b<<endl;
}

void sum(int a , int b , int c){
    cout<<a+b+c<<endl;
}

void diff(int a ,int b){
    cout<<b-a<<endl;
}

void diff(double a , double b){
    cout<<b-a<<endl;
}


 
int main()
{
    sum(1,2);
    sum(1,2,3);

    diff(2,4);
    diff(2.6523 , 6.8923);
    return 0 ;
}