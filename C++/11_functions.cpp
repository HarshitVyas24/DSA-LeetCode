#include<iostream>
#include<cmath>
using namespace std;

void isPalindrome(int n){

    
    int rev_num = 0;
    for(int new_num = n ; new_num!=0 ; new_num = new_num/10){

        int last_digit = new_num%10;
        rev_num = rev_num*10 + last_digit;
    }
    if(rev_num == n){
        cout<<"The given number is a Palindrome"<<endl;
    }else
        cout<<"The given number is not a Palindrrome."<<endl;
}

int digitSum(int n){

    int sum = 0 ;
    for(int new_num = n; new_num!=0 ; new_num = new_num/10){
        
        int last_digit = new_num%10 ;
        sum += last_digit;
    }

    return sum;
}

void identity1(int a, int b){

    int result = a*a + b*b + 2*a*b ; 
    
    cout<<"a^2 + b^2 + 2*ab = "<<result<<endl;
}

void largest(int a , int b ,int c){

    if(a>b && a>c){
        cout<<a<<" is the largest."<<endl;
    }else if(b>c){
        cout<<b<<" is the largest of all three numbers."<<endl;
    }
    else{
        cout<<c<<" is the largest of all the three numbers."<<endl;
    }
}

char nextAlpha(char ch){

    if(ch+0 == 90 ){
       ch = ch -25;
       return ch;
    }
    else if(ch+0 == 122){
        ch = ch-25;
        return(ch);
    }
    else{
        return ch+1;
    }
}

int febonacci(int n){

    int first = 0 , sec = 1;
    cout<<first<<" "<<sec<<" ";

    for(int i = 2 ; i*i<=n ;i++){

        int third = first + sec;
        cout<<third<<" ";
        
        first = sec;
        sec = third;
    }
    cout<<endl;
}

int fact(int n){
    int fact = 1;

    for(int i = 0 ; i<n ; i++){
        
        fact *= (i+1);
    }
    return fact;
}

void isPrime(int n){

    bool isPrime = true;
    for(int i = 2 ; i<sqrt(n) ; i++){

        if(n%i == 0){
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout<<"The given number is a Prime Number."<<endl;

    }
    else    
        cout<<"The given number is not a Prime Number."<<endl;
}

int binCoeff(int n , int r){

    int coeff = fact(n)/(fact(r)*fact(n-r));
    return coeff;
}

void primeInRange(int n ){

    for(int i = 2 ;i<=n ; i++){
        bool isPrime = true;

        for(int j = 2 ; j*j<=i ; j++){
            if(i%j== 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
        // cout<<endl;
    }
}
int main(){
    int n , a ,b, c,r;
    // char alpha;

    // cout<<"Alpha : "<<alpha;
    // cin>>alpha;\

    cout<<"n: ";
    cin>>n;

    // cout<<"r : ";
    // cin>>r;

    // isPalindrome(n);
    // cout<<"The sum of digits of the given number is : "<<digitSum(n)<<endl;

    // cout<<"a : ";
    // cin>>a;

    // cout<<"b: ";
    // cin>>b;
    
    // cout<<"c: ";
    // cin>>c;
    // identity1(a,b);
    // largest(a,b,c);
    // cout<<"The next character is "<<nextAlpha(alpha);

    // febonacci(n);
    // int factorial = fact(n);
    // cout<<factorial<<endl;

    // isPrime(n);

    // int binomial_coefficient = binCoeff(n , r);
    // cout<<binomial_coefficient<<endl;

    primeInRange(n);
    return 0;
}