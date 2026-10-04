#include<iostream>
using namespace  std;

int main(){

    // for(int i = 0 ; i<5 ; i++){
    //     cout<<"Apna College"<<endl;
    // }

    // int n;
    // int sum = 0;
    // cout<<"Enter n : ";
    // cin>>n;

    // for(int i = 1 ; i<=n ; i++){
    //     sum += i;
    // }
    // cout<<"Sum = "<<sum<<endl;

    cout<<"--------------Practice 1-----------"<<endl;
    
    int n ;
    // cout<<"n = ";
    // cin>>n;
    
    // for(int i = 0 ;  i<n ; i++){
    //     for(int j=0 ; j<n ; j++){
            
    //         cout<<"* ";
            
    //     }
    //     cout<<endl; 
    // }
    cout<<"--------------Practice 2-----------"<<endl;
    
    // cin>>n;
    
    // for(int i= n; i>0 ; i--){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    cout<<"--------------Practice 3-----------"<<endl;
    
 
    
    cout<<"--------------Practice 3-----------"<<endl;
    
    // int num1;
    
    // cout<<"num1 = ";
    // cin>>num1;
    // int sum = 0;
    // int new_num = num1;
    
    // while(new_num != 0){
        
    //     int last_digit = new_num%10;
    //     if(last_digit % 2 != 0)
    //     sum += last_digit; 
    //     new_num = new_num/10;
    // }
    
    // cout<<"The sum of odd digits = "<<sum<<endl;
    
    cout<<"--------------Practice 4-----------"<<endl;
    
    // int num1;
    
    // cout<<"num1 = ";
    // cin>>num1;
    // int new_num = num1;
    
    // while(new_num != 0){
        
    //     int last_digit = new_num%10;
    //     cout<<last_digit<<" ";
    //     new_num = new_num/10;
    // }
    
    // cout<<endl;
    
    cout<<"--------------Practice 4-----------"<<endl;

    // int num1;
    
    // cout<<"num1 = ";
    // cin>>num1;
    // int new_num = num1;
    // int res = 0;
    
    // while(new_num != 0){
        
    //     int last_digit = new_num%10;
    //     res = res*10 + last_digit;
    //     new_num = new_num/10;
    // }

    // cout<<"reverse = "<<res<<endl;
    
    // cout<<endl;

    cout<<"--------------do-while-----------------"<<endl;

    // int val = 1 ;

    // do{
    //     cout<<"Harshit."<<endl;
    // }while(val > 5);

    cout<<"--------------Practice 5------------"<<endl;
   
    while(true){
        cin>>n;
        if(n%10 == 0)
            break;
    }
    cout<<"Multiple of 10 entered- "<<n<<endl;
    
    cout<<"--------------Practice 5------------"<<endl;
   
    while(true){
        cout<<"Enter a number : ";
        cin>>n;
        if(n%10 == 0)
            continue;
        else
            cout<<"You Entered: "<<n<<endl;
    }
    
    return 0;
}