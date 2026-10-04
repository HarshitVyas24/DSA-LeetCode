#include<iostream>
using namespace std;

void multiplyBy2(int &a, int &b , int &c){

    a *= 2;
    b *= 2;
    c *= 2;
}

int main(){

    //ques 1 

    // int x = 5;
    // int y = 10;

    // int *ptr1 = &x;
    // int *ptr2 = &y;
    // ptr2 = ptr1;
    
    // cout<<*(ptr1)<<" "<<*(ptr2)<<endl;

    //ques2

    // int x ;
    // int *ptr;

    // x = 7;
    // ptr  = &x;

    // cout<< *ptr<<endl;

    //ques3

    // int x =1 , y=2  , z = 3;
    // multiplyBy2(x,y,z);

    // cout<<x<<y<<z<<endl;


    //ques4

    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += 32;
    *ptr += ch;
    cout<< a << ", "<<ch<<endl;

    return 0;
}