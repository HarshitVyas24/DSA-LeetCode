#include<iostream>
using namespace std;

void p1(int n){
    
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<=i ; j++)
            cout<<"* ";
        cout<<endl;
    }
    
}

void p2(int n){

    for(int i = 0; i<n ; i++){
        for(int j = n-i ; j>0 ; j--)
            cout<<"* ";
        cout<<endl;
    }
}

void p3(int n){
    
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

void p4(int n){
    char alpha = 'A';
    for(int i = 0; i<n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<alpha;
            alpha++;
        }
        
        cout<<endl;
    }
}

void p5(int n){

    // for(int i= 0 ; i<n ; i++){
    //     if(i == 0 ||  i==n-1){
    //         for(int j = 0 ; j<=n ; j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int j = 0 ; j<=n ; j++){
    //             if(j==0 || j==n){
    //                 cout<<"*";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }

    for(int i = 1 ; i<=n ; i++){
        cout<<"*"; //first
        for(int j = 1 ; j<=n-1 ; j++){                                               
            if(i==1 or i==n){
                cout<<"*";
            }else
                cout<<" ";
           
        }
        cout<<"*"<<endl; //last
        
    }
}

void p6(int n){
    //My code

    // for(int i = 1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n-i ; j++){
    //         cout<<" ";
    //     }
        
    //     for(int j=n ; j>n-i;j--){
    //         cout<<"*";
    //     }   
    //     cout<<endl;
    // }

    //stolen but more simpler code

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n-i ; j++){

            cout<<" ";
        }
        for (int j= 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p7(int n){
    int num = 1;
    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = 1 ; j<=i ; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void p8(int n){

    for(int i = 1 ; i<=n ; i++){
        
        // SPACE
        for(int j = 1 ; j<=n-i ; j++){
            cout<<" ";
        }

        //STAT
        for(int j = 1 ; j<=2*i - 1 ; j++){
            cout<<"*";
        }

        //SPACE
        for(int j = 1 ; j<=n-i ; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i = 1 ; i<=n ; i++){

        //SPACE
        for(int j = 1 ; j<=i-1 ; j++){
            cout<<" ";
        }

        //STAR
        for(int j = 1 ; j<= 2*(n-i)+1 ; j++){
            cout<<"*";
        }

        //SPACE
        for(int j = 1 ; j<=(i-1) ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p9(int n){

    for(int i = 0 ; i<n ; i++){
        
        //star
        for(int j = 0 ; j<i+1 ; j++){
            cout<<"*";
        }
        
        //space
        for(int j = 0 ; j<2*(n-i-1) ; j++){
            cout<<" ";
        }
        
        //star
        for(int j = 0 ; j<i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i = n ; i>0 ; i--){

        //star
        for(int j = 0 ; j<i ; j++){
            cout<<"*";
        }

        //space
        for(int j = 0 ; j< 2*(n-i) ; j++){
            cout<<" ";
        }

        //start
        for(int j=0 ; j<i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p10(int n){
    
    bool value = true;
    for(int i = 0 ; i<n ; i++){
        bool val = value;
        for(int j = 0 ; j<=i ; j++){
            cout<<val<<" ";
            val = (!val);
        }
        cout<<endl;
        value = !value;
    }
}

void p11(int n){

    for(int i = 0 ; i<n ; i++){
        
        //space
        for(int j = 0 ; j< n-i ; j++ ){
            cout<<" ";
        }

        //star
        for(int j =0 ; j<n; j++){
            cout<<"*";
        }

        //space
        for(int j = 0 ; j<=i ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p12(int n){
    
    for(int i =1 ; i<=n ; i++){

        //space
        for(int j = 1 ; j<=n-i ; j++){
            cout<<" ";
        }

        //num forward
        for(int j = i ; j>=1; j--){
            cout<<j;
        }

        //num backward
        for(int j= 2 ; j<=i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){

    int n;
    cin>>n;

    // p1(n);
    // p2(n);
    // p3(n);
    // p4(n);
    // p5(n);
    // p6(n);
    // p7(n);
    // p8(n); 
    // p9(n);
    // p10(n);
    // p11(n);
    p12(n);

    
}