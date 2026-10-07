#include<bits/stdc++.h>
using namespace std ; 

void trappedRainWater(int heights[] , int n){

    int left_max[100000];
    left_max[0] = heights[0];

    int right_max[100000];
    right_max[n-1] = heights[n-1];

    for(int i = 1 ;i<n ; i++){

        left_max[i] = max(heights[i-1], left_max[i-1]);
    }

    for(int i = n-2 ; i>=0 ; i--){
        
        right_max[i] = max(heights[i+1] , right_max[i+1]);
    }

    int traped_water_per_bar[100000];
    int trapped_water= 0;
    for(int i = 0; i<n ; i++){

        traped_water_per_bar[i] = min(left_max[i] , right_max[i]) - heights[i];
        if(traped_water_per_bar[i] < 0){
            continue;
        }
        else{
            trapped_water += traped_water_per_bar[i];
        }
    }

    cout<<"The total amount of water trapped = "<<trapped_water<<endl;


}
 
int main()
{
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(n);

    trappedRainWater(heights, n);
    return 0 ;
}