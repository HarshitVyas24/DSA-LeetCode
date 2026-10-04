#include<iostream>
#include<cmath>
using namespace std;


void bin_to_dec(int n){

    int deci = 0;

    int pow = 1;
    for(int num = n ; num!=0 ; num = num/10 ){
        int last_digit = num%10 ; 

        deci += last_digit*pow;
        pow = pow*2 ; 
    }
    cout<<"The decimal equivalent for the given Binary is : "<<deci<<endl;
}

void deci_to_bin(int n){

    int bin = 0;

    int pow = 1;
    for(int num = n ; num!=0 ; num = num/2 ){
        int rem = num%2;
        bin += rem*pow;
        pow = pow*10 ; 
    }
    cout<<"The Binary equivalent for the given Decimal is : "<<bin<<endl;
}

int addBinary(int a, int b) {
    while (b != 0) {
        int carry = (a & b) << 1; // Bits where both are 1 carry over
        a = a ^ b;               // Sum of bits where at least one is 0
        b = carry;
    }
    return a;
}

int main(){

    // bin_to_dec(1111);
    // deci_to_bin(15);
    cout<<addBinary( 10, 1000)<<endl;

    return 0;
}
