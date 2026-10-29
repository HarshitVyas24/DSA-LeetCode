#include<bits/stdc++.h>
using namespace std ; 


int removeDuplicates(int arr[] , int n){

    int i= 0;
    for(int j= i+1 ;  j<n ; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
             
    }
    return i+1;

}
 
int main()
{
    int arr[]= {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(int);

    removeDuplicaates(arr, n);
    return 0 ;
}