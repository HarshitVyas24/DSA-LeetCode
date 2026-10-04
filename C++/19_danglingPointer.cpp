#include<bits/stdc++.h>
using namespace std ; 


int* getPointer(){
    int a = 30;
    return &a;
}
int main()
{
    int * ptr = new int(10);

    delete ptr; //Deallocatibng dynamically all0ocated memory

    int* ptr2 = getPointer(); //Return local variable address from a function
    cout<<ptr2<<endl;

    //variable going out of scope

    {
        int a  = 32;
        int ptr3 = &a;
    }

    cout<<ptr3<<endl;
    return 0 ;
}