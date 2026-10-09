#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2,4,5};

    for(auto it = nums2.begin() ; it<nums2.end() ; it++){

        nums1.push_back(*it);
    }

    sort(nums1.begin() , nums1.end());
    cout<<nums1[2]<<endl;

    double median = (*(nums1.begin()) + *(nums1.end()-1))/2;

    cout<<median<<endl;

}