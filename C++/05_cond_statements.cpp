#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
    // cout<<"------------Practice question 1 ----------------"<<endl;
    
    // int a , b;
    // cout<<"Enter the first number : ";
    // cin>>a;
    
    // cout<<"Enter the first number : ";
    // cin>>b;
    
    // if(a>b){
    //     cout<<"a= "<<a<<endl;
    // }
    // else{
    //     cout<<"b= "<<b<<endl;
    // }
    
    
    // cout<<"------------Practice question 2 ----------------"<<endl;
    
    // cout<<"Enter the first number : ";
    // cin>>a;

    // if(a%2==0){
    //     cout<<a<<" is an even number."<<endl;
    // }

    // else{
    //     cout<<a<<" is an odd number."<<endl;
    // }


    // cout<<"------------ELSE IF-practice ques 1----------"<<endl;
    
    // int income ;
    // double tax;
    // cout<<"Enter your income : ";
    // cin>>income;
    
    // if(income< 5){
    //     tax = 0;
        
    // }else if(income<=1000000){
    //     tax = 0.2 * income ; 
    // }else{
    //     tax = 0.3 * income;
    // }
    
    // cout<< "Tax = "<<(tax * 100000)<<endl;
    
    // cout<<"------------ELSE IF-practice ques 1----------"<<endl;

    // int c,d,e;

    // cin>>c;
    // cin>>d;
    // cin>>e;

    // if(c>d && c>e){
    //     cout<<"c is the largest."<<endl;
    // }else if(d>e){
    //     cout<<"d is the largest number."<<endl;
    // }else{
    //     cout<<"e is the largest"<<endl;
    // }

    // cout<<"-------TERNARY OPERATOR-----------"<<endl;
    // bool isAdult;
    // int age;
    // cout<<"Enter your age : ";
    // cin>>age;
    // isAdult = age >=18 ? true : false;
    // cout<<isAdult<<endl;

    // cout<<"-------Ternary Example 2----------"<<endl;
    
    // int largest;
    // int a, b;
    // cout<<"a = ";
    // cin>>a;
    // cout<<"b = ";
    // cin>>b;
    
    // largest = a>b ? a : b;
    
    // cout<<"largest number = "<<largest<<endl;
    
    // cout<<"-------Ternary Example 2----------"<<endl;

    // cout<<"Enter a number : ";
    // cin>>a;

    // bool isEven = a % 2 == 0 ? true : false ;
    // cout<<isEven<<endl;    
    

    cout<<"-------SWITCH STATEMENT-----------"<<endl;
    int day;
    cout<<"Enter the number : ";
    cin>>day;
    switch(day){
        case 1: cout<<"Monday"<<endl;
            break;
        case 2 : cout<<"Tuesday"<<endl;
            break;
        case 3 : cout<<"Wednesday"<<endl;
            break;
        case 4 : cout<<"Thurtsday"<<endl;
            break;
        case 5 : cout<<"Friday"<<endl;
            break;
        case 6 : cout<<"Saturday"<<endl;
            break;
        case 7 : cout<<"Sunday"<<endl;
            break;
        default : cout<<"Invalid Day Number."<<endl;
    }

    cout<<"------------Calculator Using Switch-------"<<endl;

    float num1 , num2;
    char oprn;
    cout<<"num1 = ";
    cin>>num1;

    cout<<"Operation : ";
    cin>>oprn;

    cout<<"num2 = ";
    cin>>num2;

    switch(oprn){
        case '+' : cout<<num1 + num2<<endl;
            break;

        case '-' : cout<<num1 - num2<<endl;
            break;

        case '*' : cout<<num1 * num2<<endl;
            break;
            
        case '/' : cout<<num1 / num2<<endl;
            break;
        
        default : cout<<"Invalid Operation!"<<endl;

    }

    
    
    return 0 ;
}