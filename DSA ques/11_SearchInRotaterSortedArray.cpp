#include<bits/stdc++.h>
using namespace std ; 

void SearchRotaterSortedArry(vector<int>& nums , int target){

    int low = 0 , high = nums.size()-1;

    while(low<=high){

        int mid= (low+high)/2;

        if (nums[mid] == target){

            return mid;
        }
        

        if(nums[low]<=nums[mid]){

            if(nums[low]<=target & target<mid){
                high = mid-1;
            }
            else{
                low = mid+1;

            }
        }
        else{

            if(target>nums[mid] & target<=nums[high]){

                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
 
int main()
{
    
    vector <int> nums = {4,5,6,7,0,1,2};
    // int n = sizeof(nums)/sizeof(int);

    cout<<SearchRotaterSortedArry(nums, 0)<<endl;
    return 0 ;
}