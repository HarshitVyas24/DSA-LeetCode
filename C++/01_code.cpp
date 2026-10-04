#include<iostream>
#define PI 3.14    //Macros---> Symbolic Constants
using namespace std;

int main(){

    // cout<<"Hello World"<<endl;
    // cout<<PI<<endl;

    // cout<<"****\n***\n**\n*"<<endl;

    int a = 10;
    int b = 15;
    // int c; //c have GARBAGE VALUE until initialized
    // char grade = 'A';
    // int age = 25;
    // int marks = -200;
    // bool isAdult = true;
    // float cgpa = 8.9; //4 byte
    // double price = 99.9; //8 byte ----> float with size 8 bytes
    
    // cout<<age<<" "<<marks<<" "<<grade<<" "<<isAdult<<endl;

    // cout<<"size of int = "<<sizeof(int)<<endl;
    // cout<<"size of int = "<<sizeof(char)<<endl;
    // cout<<"size of int = "<<sizeof(bool)<<endl;
    // cout<<"size of int = "<<sizeof(float)<<endl;
    

    //SUM OF TWO VARIABLESS

    // int sum = a+b;
    // int prod = a*b;
    // int diff = a-b;
    // int div = a/b;
    // cout<<"SUM : "<<sum<<endl;
    // cout<<"PRODUCT : "<<prod<<endl;
    // cout<<"DIFFERENCE : "<<diff<<endl;
    // cout<<"DIVISION : "<<div<<endl;

    float maths;
    float english;
    float science;

    cout<<"Enter math marks : ";
    cin>>maths;
    cout<<"Enter english marks : ";
    cin>>english;
    cout<<"Enter science marks : ";
    cin>>science;

    float avg = (maths + science + english)/3;
    cout<<"Average : "<<avg<<endl;
    
    return 0;
}

