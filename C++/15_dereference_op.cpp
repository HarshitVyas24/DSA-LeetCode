#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
    int a = 10 ;
    
    int*ptr = &a;
    

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr= 20;
    cout<<a<<endl;

    int *ptr2 = NULL;
    cout<<ptr2<<endl;

    cout<<*ptr2<<endl;

    return 0 ;
}