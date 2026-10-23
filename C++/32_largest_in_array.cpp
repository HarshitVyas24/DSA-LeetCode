#include<bits/stdc++.h>
using namespace std ; 

int largestArrElement(int arr[], int n){

    int largest = INT_MIN;

    for(int i = 0 ; i<n ; i++){

        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    return largest;
}
 
int main()
{
    int arr[] = {3,2,1,5,2}; 

    int n = sizeof(arr)/sizeof(int);

    cout<<largestArrElement(arr , n);

    return 0 ;
}