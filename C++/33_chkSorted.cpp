#include<bits/stdc++.h>
using namespace std ; 

int chkSorted(int arr[] , int n){

    for(int i = 0 ; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            return -1;
        }
    }
    return 1;
}
 
int main()
{
    int arr[] = {1,2,3,6,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<chkSorted(arr, n)<<endl;


    return 0 ;
}