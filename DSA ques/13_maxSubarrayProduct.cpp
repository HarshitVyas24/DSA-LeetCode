// MY APPROACH TO maxProduct Subarray without using DP

#include<bits/stdc++.h>
using namespace std ; 

int maxProductSubArray(int arr[], int n){

    int product[n];
    product[0] = arr[0];

    for(int i = 1 ; i<n ; i++){

        product[i] = arr[i] *product[i-1];
    }

    int maxProduct = 0;
    for(int i = 0; i<n ; i++){

        if(product[i]>maxProduct){
            maxProduct = product[i];

        }
    }
    return maxProduct;
}
 
int main()
{
   int arr[] = {-2,0,-1};
   int n = sizeof(arr)/sizeof(int);

   cout<<"Maximum Product is: "<<maxProductSubArray(arr, n)<<endl;
   return 0 ;
}