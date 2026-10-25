#include<bits/stdc++.h>
using namespace std ; 



void leftRotateByOne(int arr[] , int n){

    for(int i= 0 ; i<n-1 ; i++){
        swap(arr[i] , arr[i+1]);

    }

    for(int i = 0; i<n ; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    leftRotateByOne(arr , n);
    return 0 ;
}