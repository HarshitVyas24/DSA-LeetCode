#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;

    // float pi = 3.14;
    // float *ptr2 = &pi;
    // cout<<ptr2<<endl; 
    // cout<<&a<<" = "<<ptr<<endl;

    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(ptr2)<<endl;

    //=============================POINTER TO POINTER============

    int **pptr = &ptr;
    cout<<&ptr<<" = "<<pptr<<endl;


    



    return 0;
}