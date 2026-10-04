#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    cout<<"=======Practice Ques1========"<<endl;

    int n; 
    // cout<<"Enter a number : ";
    // cin>>n;
    // int factorial= 1;

    // for(int i = 0 ; i<n ; i++){

    //     factorial *= (n-i);

    // }

    // cout<<n<<"! = "<<factorial;

    cout<<"=======Practice Ques2========"<<endl;

    // cout<<"Enter a number : ";
    // cin>>n;

    // for(int i = 1 ; i<=10 ; i++){

    //     cout<<n<<" X "<<i<<" = "<<(n*i)<<endl;
    // }


    cout<<"=======Practice Ques3========"<<endl;

    // cout<<"Enter a number : ";
    // cin>>n;
    // int new_num = n;
    // int sum_cube = 0;

    // while(new_num != 0){
    //     int last_digit = new_num%10;
    //     sum_cube += last_digit*last_digit*last_digit;
    //     new_num = new_num/10 ;

    // }

    // if(sum_cube == n)
    //     cout<<"Number is an Armstrong number."<<endl;
    // else
    //     cout<<"Number is Not an Armstrong number."<<endl;


    cout<<"=======Practice Ques4========"<<endl;


    
    // cout<<"Enter a num : ";
    // cin>>n;
    // for(int i = 2 ; i<=n ; i++){
    //     bool isPrime = true;
    //     for(int j = 2 ; j*j<= i ; j++){            
    //         if(i%j == 0){
    //             isPrime = false;
    //             break;                
    //         }
            
    //     }if(isPrime)    cout<<i<<endl;
        
    // }
    
    cout<<"=======Practice Ques5========"<<endl;

    cout<<"Enter a num : ";
    cin>>n;
    
    int first = 0 , sec = 1;

    cout<<first<<" "<<sec<<" ";

    for(int i = 2 ; i<n ; i ++ ){

        int third = first + sec;

        cout<<third<<" ";

        first = sec;
        sec = third;
    }

    cout<<endl;
    return 0 ;
}