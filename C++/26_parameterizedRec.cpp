#include<bits/stdc++.h>
using namespace std ; 



int sumN(int i , int sum){

    if(i<1) return sum;
    
    sumN(i-1, sum+i);

}

int sumN_funcRec(int n){

    if(n==0) return 0;

    return n + sumN_funcRec(n-1);
}

int factorialN(int n){

    if(n == 0) return 1;

    return n*factorialN(n-1);
}
 
int main()
{
   
    int n;
    int sum = 0;
    cout<<"n: ";
    cin>>n;

    cout<<sumN(n , sum)<<endl;

    cout<<sumN_funcRec(n)<<endl;

    cout<<factorialN(n)<<endl;

   return 0 ;
}