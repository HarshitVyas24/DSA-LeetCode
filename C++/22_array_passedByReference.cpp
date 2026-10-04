#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){

    ptr[0] = 1000;
}

void printArr(int nums[] , int n){

    // cout<<sizeof(nums)L<<endl; //----> yei humko array na size nahi dega instad humko array pointer ka size dega kyuki nums is a pointer that is pointing the first element of the array hence ot gives the size of array toh isiliye if we gonna write code to get size of asrray iside the function we won't get correct value as sizeof(nums)/sizeof(int) = 8/4 = 2 which is not correct size sizeof(nums) do not return the size of array rather it returns the size of integer pointer ehich is 8 bytes., so , the good practice osd to always pass the size of the array as an parameter in the function.

    for(int i = 0 ; i<n ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    // cout<<arr<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl; //arr[1]
    // cout<<*(arr+2)<<endl; //arr[2]

    // func2(arr); //passing array name is equivalent to passig a pointer
    // cout<<arr[0]<<endl;

    // cout<<n<<endl;
    printArr(arr , n);

    return 0;
}