// MY APPROACH TO maxProduct Subarray without using DP

#include<bits/stdc++.h>
using namespace std ; 

// int maxProductSubArray(int arr[], int n){

//     int product[n];
//     product[0] = arr[0];

//     for(int i = 1 ; i<n ; i++){

//         product[i] = arr[i] *product[i-1];
//     }

//     int maxProduct = 0;
//     for(int i = 0; i<n ; i++){

//         if(product[i]>maxProduct){
//             maxProduct = product[i];

//         }
//     }
//     return maxProduct;
// }


int maxProd(vector<int>& nums){

    int n = nums.size();
    int maxProd = INT_MIN;
    int prefix = 1;
    int suffix = 1;

    for(int i = 0; i<n; i++){

        if(prefix == 0 ) prefix = 1;
        if(suffix == 0 ) suffix = 1;

        prefix= prefix * nums[i];
        suffix = suffix * nums[n-i-1];

        maxProd = max(maxProd , max(prefix, suffix));
        
    }
    return maxProd;

}


int main()
{
   vector<int>nums = {2,3,-2,4};    


   cout<<"Maximum Product is: "<<maxProd(nums)<<endl;
   return 0 ;
}