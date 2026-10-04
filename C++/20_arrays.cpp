#include<iostream>
using namespace std;


int main(){

    // int marks[50];
    // int arr[50]  = {1,2,3};
    // int arr[] = {1,2,3};

    // int arr[5] = {7,5,2,1};

    //STATICALLY ALLOCATING M3EMORY TO ARRAY AT COMPILE TIME


    // int arr[5];
    // int n = sizeof(arr)/sizeof(int);

    // for(int i= 0 ; i<n ; i++){
    //     cin>>arr[i];
    // }

    // for(int i = 0 ; i<n ; i++){

    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;  

    //DYNAMICALLY ALLOCATING MEMORY TO ARRAY AT RUN TIME

    int n2;
    cout<<"Enter the size of array : ";
    cin>>n2;

    int arr2[n2];

    for(int i = 0; i<n2 ; i++){
        cin>> arr2[i];
    }

    for(int i = 0 ; i<n2 ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
     
}