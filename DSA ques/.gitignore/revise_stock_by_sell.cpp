#include<bits/stdc++.h>
using namespace std ; 


void maxProfit(int prices[] , int n){
    int best_buy[100000];
    best_buy[0] = INT_MAX;
    int profit[100000];

    for(int i =1 ; i<n ; i++){

        best_buy[i] = min(prices[i-1] , best_buy[i-1]);       
        profit[i] = prices[i] - best_buy[i]; 

    }

    int max_profit = INT_MIN;
    for(int i = 0 ; i<n ;i++){
        max_profit = max(profit[i] , profit[i-1]);
    }

    cout<<"The maximum profit is: "<<max_profit;
}
 
int main()
{
    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);

    maxProfit(prices , n);
    return 0;
}