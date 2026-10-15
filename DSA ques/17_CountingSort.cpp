#include<bits/stdc++.h>
using namespace std ; 

void countSort(iint arr[] , int n){
    int freq[100000];

    int minVal =    INT_MAX, maxVal = INT_MIN;

    for(int i= 0 ; i<n; i++){
        minVal = min(miinVal, arr[i]);
        maxVal = min(maxVal, arr[i]);
    }

    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    } 

    for(int i = minVal, j = 0 ; i<=maxVal ; i++){
        while (freq[i]> 0){
            arr[j++] = i;
            freq[i]--;
        }
        
        
    }
}
 
int main()
{
   int arr[8] = {1,4,1,3,2,4,3,7};

   return 0 ;
}