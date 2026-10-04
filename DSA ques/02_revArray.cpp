#include<iostream>
using namespace std;


void revArray(int arr[], int n ){

    int rev_arr[n];

    for(int i = 0 ; i<n ; i++){

        int j = n-i-1;
        
        rev_arr[i] = arr[j];
    }

    for(int i = 0 ; i<n ; i++){
        cout<<rev_arr[i]<<" ";
    }
    cout<<endl;
}

void revArr2ptr(int arr[] , int n){

    int *ptr1 ;
    int *ptr2 ;
    int temp;

    ptr1 = arr;
    ptr2 = arr + (n-1);
    
    //CLASSIC 2 PTR APPROACH
    while(ptr1<ptr2){

        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
       
        ptr1++;
        ptr2--;
    }
    


    for(int i =0 ; i<n ;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //MY APPROACH - CORRECT BUT NOT GOOD AS IT MIXES 2 POINTER WITH INDEXING

    // for(int i = 0 ; i<n ; i++){

    //     ptr2 = &arr[n-1-i];

    //     if(ptr1 >= ptr2){
    //         break;
    //     }
    //     else{
    //         temp = *ptr1;
    //         *ptr1 = *ptr2;
    //         *ptr2 = temp;
            
    //     }

    //     ptr1++;

    // }

    // for(int i =0 ; i<n ;i++){

    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    


    
}


int main(){

    int arr[] = {1,2,3,4,5};

    int n ;
    n = sizeof(arr)/sizeof(int);
    
    // revArray(arr , n);
    revArr2ptr(arr , n);

    return 0;
}