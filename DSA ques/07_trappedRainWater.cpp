#include<bits/stdc++.h>
using namespace std ; 


void trapRainWater(int *heights , int n){

    int leftMax[20000];
    int rightMax[20000];
    int trappedWater = 0;
    rightMax[n-1] = heights[n-1];
    leftMax[0] = heights[0];

    for(int i = 1; i<n ; i++){
        leftMax[i] = max(leftMax[i-1] , heights[i-1]);
    }

    for(int i = n-2 ; i>=0;i--){

        rightMax[i] = max(rightMax[i+1] , heights[i+1]);
        
    }

    for(int i = 0 ; i<n ; i++){

        int water_per_bar = min(rightMax[i] , leftMax[i]) - heights[i];
        if (water_per_bar <0){
            continue;
        }
        else{
            trappedWater +=water_per_bar;
        }
    }
    cout<<"Total water trapped = "<<trappedWater<<endl;
}
 
int main()
{
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    
    trapRainWater(heights , n);
    return 0 ;
}