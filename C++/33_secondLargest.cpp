#include<bits/stdc++.h>
using namespace std ; 

int secondLargest(int arr[] , int n ){

    int largest = INT_MIN;
    int secLarge = INT_MIN;

    for(int i= 0 ; i<n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    for(int i = 0 ; i<n; i++){

        if(arr[i] != largest && arr[i] > secLarge){
            secLarge = arr[i];
        }
    }

    return secLarge;

}
 
int main()
{
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<secondLargest(arr , n)<<endl;
    return 0 ;
}