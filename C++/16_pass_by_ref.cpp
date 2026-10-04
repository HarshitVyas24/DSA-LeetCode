#include<iostream>
using namespace std;

//pass by reference using pointer
// void changeA(int *a){

//     *ptr = 20;
//     cout<<*ptr<<endl;
// }


//pass by reference using reference variable

void changeA(int &param){

    a = 20;
    cout<<a<<endl;
} 

int main(){

    int a=10;
    changeA(a);

    cout<<a<<endl;
    
    return 0;
}


//Here changes are occuring at the original address of the variable so,the variable value will also be chaning unlike in the "pass by value"