#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int key){

    for(int i = 0; i<n ; i++){

        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}




int main(){

    int ary[] = {1,2,3,4,5};
    int n = sizeof(ary)/sizeof(int);

    cout<<linearSearch(ary , n , 2);
  
    return 0; 
} 