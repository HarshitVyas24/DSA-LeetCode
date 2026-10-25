#include<bits/stdc++.h>
using namespace std ; 


void MoveZeroesToEnd(int arr[] , int n){

    int temp = n;
    for(int i = 0; i<temp ; i++){

        if(arr[temp-1]==0){
            temp = temp-1;
        }

        if(arr[i] == 0){
            swap(arr[i] , arr[temp-1]);
        }
    }

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr) / sizeof(int);
    
    MoveZeroesToEnd(arr , n);
    return 0 ;
}