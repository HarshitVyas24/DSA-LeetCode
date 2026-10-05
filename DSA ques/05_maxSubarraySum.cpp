#include<bits/stdc++.h>
using namespace std ; 
 
void maxSubarraySum1(int *arr , int n){

    int maxSum = INT_MIN;
    for(int start = 0; start<n ; start++){
        
        for(int end= start ; end<n ; end++){
            
            int currentSum = 0;
            for(int i=start ; i<=end; i++){
                currentSum += arr[i];
            }
            cout<<currentSum<<", ";
            maxSum = max(maxSum, currentSum);
        }
        cout<<endl;
    }

    cout<<"The maximum subArray sum is : "<<maxSum<<endl;

}



void maxSubarraySum2(int *arr , int n){ //Optimized BruteForce

    int maxSum = INT_MIN;
    for(int start = 0; start<n ; start++){
        
        int currentSum = 0;
        for(int end= start ; end<n ; end++){
            
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
        cout<<currentSum<<", ";
    }
    cout<<endl;

    cout<<"The maximum subArray sum is : "<<maxSum<<endl;
}



int main()
{
    

    int arr[]=  {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum2(arr , n);
    return 0 ;
}