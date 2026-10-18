#include<bits/stdc++.h>
using namespace std ; 


void revAray(int i, int arr[] , int n ){

    if(i>= n/2) return;

    swap(arr[i] , arr[n-i-1]);

    revAray(i+1 , arr , n);
}


bool isPalindrome(int i , string &s){

    if(i>=s.size()/2) return true;

    if(s[i] != s[s.size()-i-1]) return false;

    isPalindrome(i+1 , s);
}


 
int main()
{
    int arr[] = {1,2,3,4};
    
    string s = "Hello";

    // revAray(0 , arr , n);
    cout << isPalindrome(0 , s)<<endl;

    // for(int i = 0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    return 0 ;
}