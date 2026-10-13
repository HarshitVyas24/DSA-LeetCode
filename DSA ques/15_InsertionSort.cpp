#include<bits/stdc++.h>
using namespace std ; 

void printArr(int arr[], int n){
    for(int i = 0; i<n ; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void inserSort(int arr[] , int n){

    for(i = 1; i<n; i++){

        curr = arr[i];
        prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    printArr(arr , n);
}
 
int main()
{
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(n);
    return 0 ;
}