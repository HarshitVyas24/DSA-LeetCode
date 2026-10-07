#include<bits/stdc++.h>
using namespace std ; 

bool containsDuplicate(const int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false; 
}
 
int main()
{
    int nums[4] = {1,2,3,1};
    int n = sizeof(nums)/sizeof(int);

    cout<<containsDuplicate(nums, n)<<endl;
    return 0 ;
}