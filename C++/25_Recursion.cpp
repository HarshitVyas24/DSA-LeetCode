/*
Structure

func{
}
    BASE CONDITION
    .
    .

    SOME CODE 
    .
    .
    .
    samee function call

*/



#include<bits/stdc++.h>
using namespace std ; 

int cnt = 0;
void Count(){

    if(cnt == 4) return;

    cout<<cnt<<endl;
    cnt ++;
    Count();
}


void printName(int i , int n){

    if(i > n){
        return;
    }
    
    cout<<"Harshit"<<endl;
    i++;
    printName(i,n);
}

void printLinearly(int i , int n){

    if(i > n) return;

    cout<<i<<endl;
    i++;
    printLinearly(i, n);
}

void printNto1(int n){

    if(n<1) return;

    cout<<n<<endl;
    printNto1(n-1);
}


int SumOfFirstN(int i, int sum){

    if(i<1)return sum;
    SumOfFirstN(i-1, sum+i);

}
int main()
{ 
    int n;
    cout<<"n: "<<endl;
    cin>>n;
    // Count();
    // printName(1,5);
    // printLinearly(1,5);
    // printNto1(10);

    cout<<SumOfFirstN(n,0)<<endl;
    return 0 ;
}