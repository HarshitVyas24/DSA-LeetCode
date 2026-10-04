#include<iostream>
#include<cmath> //iska pow function returnsn double value
using namespace std ;

int main(){

    // cout<<"----------QUESTION 1-------------"<<endl;
    
    // int num;
    // cout<<"num = ";
    // cin>>num;
    
    // if(num == 0)
    // cout<<"The number is 0"<<endl;
    // else if (num<0)
    // cout<<"The number is negative."<<endl;
    // else
    // cout<<"The number is positive"<<endl;
    
    // cout<<"----------QUESTION 2-------------"<<endl;
    
    // int year;
    // bool isLeap;
    // cout<<"Enter the year : ";
    // cin>>year;
    
    // if(year%100 == 0){
    //     if(year%400 == 0)
    //     cout<<year<<" is a Leap Year"<<endl;
    //     else
    //     cout<<year<<" is not a Leap Year"<<endl;
    // }
    // else{
    //     if(year%4 == 0)
    //     cout<<year<<" is a Leap Year"<<endl;
    //     else   
    //     cout<<year<<" is not a Leap Year"<<endl;
    // }
    
    
    // cout<<"----------QUESTION 3-------------"<<endl;
    // int a = 63, b = 36; 
    
    // bool x = (a < b) ? true : false;  //0
    
    // int y = (a > b) ? a : b; //63
    // cout << x << "," << y << endl; //0,63
    
    // cout<<"----------QUESTION 4-------------"<<endl;
    
    // a = 5; 
    // if (++a*5 <= 25) { 
    //     cout<<"Hello\n"; 
    // } else { 
    //     cout<<"Bye\n"; 
    // } 
    
    cout<<"----------QUESTION 5-------------"<<endl;
    
    int num2;
    cout<<"num2 = ";
    cin>>num2 ; 

    int sum_cube = 0;
    int new_num2 = num2;
    while(new_num2 != 0){
        int last_digit = new_num2%10;
        sum_cube += (last_digit*last_digit*last_digit);
        new_num2 = new_num2/10;
    }
    
    cout<<"Sum of cube of digits = "<<sum_cube<<endl;

    if(sum_cube == num2)
        cout<<num2<<" is an Armstrong Number."<<endl;

    else
        cout<<num2<<" is not an Armstrong number."<<endl;    
    
    return 0;
}