#include<bits/stdc++.h>
#include<cmath>
using namespace std ; 
 
int main()
{
    //Write the normalized as well as optimized logiic for Prime Number

    // int n = 127;
    // bool isPrime = true;

    // for(int i= 2; i<= n-1; i++){

    //     if(n%i == 0){
    //         isPrime = false;
    //     }
    // }

    // if(isPrime){
    //     cout<<"Number is a Prime Number."<<endl;
    // }
    // else    
    //     cout<<"Number is not a Prime Number."<<endl;

    
    //OPTIMIZED CODE

    int n =2;

    bool isPrime = true;

    for(int i = 2 ; i<=sqrt(n) ; i++){
        if(n%i == 0){
            isPrime = false;
        }
    }

    if(isPrime){
        cout<<"Number is a Prime number."<<endl;
    
    }
    else    
        cout<<"The number is not a Prime number."<<endl;
    
    return 0 ;
}