#include<iostream>
#define X 25        //MACROS DO NOT OCCUPY ANY SPACE IN MEMORY 
#define ll long long 
using namespace std;

int main(){

    const int PI = 3.14 ; // CONSTANTS OCCUPY SPCE IN MEMORY 
    
    
    cout<<"------------IMPLICIT TYPECASTING----------"<<endl;
    
    // bool --> char ---> int ----> float -----> double

    cout<<(10/3)<<endl; //3
    cout<<(10/3.0)<<endl; //3.3333
    cout<<('A' + 1)<<endl; //66----> promotes char to int


    cout<<"-------------EXPLICIT TYPECASTING---------"<<endl;

    float c = 3.152;

    cout<<(int)(c)<<endl; //3
    cout<<((float)10/3)<<endl; //3.3333
    cout<<(char)('A' + 1)<<endl; //B

    cout<<"-------------PRACTICE QUESTION1------"<<endl;
    
    cout<<(bool)3 + 2<<endl; //3---> bool typecasted to int 
    
    cout<<"-------------PRACTICE QUESTION2------"<<endl;

    cout<<(23.5+2+'A')<<endl ; //26.5 ----. all typecasted to double 

    cout<<"-------------ARITHMATIC OPERATORS(BINARY)-----"<<endl;
    
    int d = 3;
    int e = 5;
    
    cout<<"+"<<(d+e)<<endl;
    cout<<"-"<<(d-e)<<endl;
    cout<<"*"<<(d*e)<<endl;
    cout<<"/"<<(d/e)<<endl;
    cout<<"%"<<(d%e)<<endl;
    
    cout<<"-------------ARITHMATIC OPERATORS(UNARY)-----"<<endl;
    
    int f = 3;
    f++ ; //4
    cout<<"f = "<<f<<endl;
    
    f--; //3
    cout<<"f = "<<f<<endl;
    
    int a = 2;
    int b = a++;
    
    cout<<"a = "<<a<<endl; //3
    cout<<"b = "<<b<<endl; //2
    
    a = 2;
    b = ++a ;
    cout<<"a = "<<a<<endl; //3
    cout<<"b = "<<b<<endl; //3
    
    cout<<"-------------ASSIGNMENT OPERATORS-----"<<endl;
    
    a += 2; //a = a+2 ----> 5
    cout<<"a = "<<a<<endl;
    a -= 2; //a = a-2 ----> 3
    cout<<"a = "<<a<<endl;
    a *= 2; //a = a*3 ---> 6
    cout<<"a = "<<a<<endl;
    a /= 3; //a = a/3 ---> 2
    cout<<"a = "<<a<<endl;
    
    cout<<"-------------RELATIONAL OPERATORS(BOOL)-----"<<endl;
    
    a = 10;
    b = 20;
    
    cout<<(a>b)<<endl; //false --> 0
    cout<<(a<b)<<endl; //true --> 1
    cout<<(a>=b)<<endl; //false --> 0
    cout<<(a<=b)<<endl; // true --> 1
    cout<<(a!=b)<<endl; // true---> 1
    
    
    cout<<"-------------LOGICAL OPERATORS-----"<<endl;
    
    cout<< ((3<5) && (10==10))<<endl; //1
    cout<< ((3<5) || (10==11))<<endl; //1
    cout<< (!(3<5))<<endl; //false 0
    
    
    
    return 0;
    
}