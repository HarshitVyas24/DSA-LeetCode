#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
    int arr[] = {5,4,3,9,2};

    int n = sizeof(arr)/sizeof(int);
    int max= arr[0];
    int min = arr[0];
    for(int i = 0 ; i<n ; i++){
        
        if(arr[i]>max){
            max = arr[i];
        }

        if(arr[i]< min){
            min = arr[i];
        }
    }
    cout<<"The largest of all elements is: "<<max<<endl;
    cout<<"The smallest of all elements is: "<<min<<endl;

    return 0 ;
}