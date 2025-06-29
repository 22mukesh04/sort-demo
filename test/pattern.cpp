/*
// First problem
// #include<iostream>
// using namespace std;

// int main(){
//     // Pattern problems start
//     // SQUARE PATTERN
    
//     //         For n=3
//     // 123
//     // 123
//     // 123
//     //         For n=4
//     // 1234
//     // 1234
//     // 1234
//     // 1234
//     // Outer loop will be printed n times 
//     // Inner loop will tell what will be single row look like
//     int n ;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for( int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

//  ******** SECOND PROBLEM **********
//  To print n*n star pattern
//  if user enter n = 4
//  * * * *
//  * * * *
//  * * * *
//  * * * *
// #include<iostream>
// using namespace std;

// int main() {
//     int ns;
//     cout<<"Enter a number : ";
//     cin>>ns;
//     for(int i=0; i<ns;i++){
//         for(int j=1;j<=ns;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }

// }

//  ********** PROBLEM 3 ***********

//  To print n*n  pattern with Characters A B C D 
//  if user enter n = 4
//  A B C D
//  A B C D
//  A B C D
//  A B C D
// #include<iostream>
// using namespace std;
//  int main(){
//     char ch= 65 ;
//     int nl;
//     cout<<"Enter the value of n : \n";
//     cin>>nl;
//     for(int i=0;i<nl;i++){
//         char ch= 65 ;
//         for(int j=0;j<nl;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<"\n";

//     }

//  }
*/
/*
for the outer loop,
         count the number of lines
for the inner loop , 
    focus on the columns,
      and connect them somehow to the rows
 
OBSERVE SYMMETRY (OPTIONAL )

for n = 4

    * * * *
    * * * *
    * * * *
    * * * *

    for ( int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 4 ;j++){
                cout<<"*";
        
        }
        cout<<"\n";
    }
*/
#include<iostream>
using namespace std;

void print1(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ;j++){
                cout<<"* ";
        }
        cout<<"\n";
    }
}
void print2(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i + 1 ;j++){
                cout<<"* ";
        }
        cout<<"\n";
    }
}
void print3(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i + 1 ;j++){
                cout<<j+1<<" ";
        }
        cout<<"\n";
    }
}
void print4(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i + 1 ;j++){
                cout<<i+1<<" ";
        }
        cout<<"\n";
    }
}
void print5(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = n - i ; j > 0 ; j--){
                cout<<"* ";
        }
        cout<<"\n";
    }
}
void print6(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = n - i ; j > 0 ; j--){
                cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void print6s(int n){
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n - i  ; j++){
                cout<<j + 1<<" ";
        }
        cout<<"\n";
    }
}
void print7(int n){
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n - i - 1 ; j++){
            cout<<" ";
        }
        // for ( int j = 0 ; j < 2*(i + 1) - 1 ; j++){
        for ( int j = 0 ; j < (2 * i) + 1 ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
// BY MY WAY NEW METHOD
void print7ss(int n){
    int k = n ;
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < k ; j++){
            if ( i + j < n -1 ){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        k++;
        cout<<"\n";
    }

}
void print7_ss(int n){
    int k = n ;
    for (int i = 0 ; i < n ; i++){
        for(int j = n + k - 1 ; j > 0 ; j--){
            if (j + i > n + k - 1 ){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        k--;
        cout<<"\n";
    }

}

void print12(int n){
    
    for(int i = 1 ; i <= n ; i++ ){
        // number
        for ( int j = 0 ; j < i ; j++ ){
            cout<<j+1<<" ";    
        }
        // space
        for( int j = 0 ; j < 2*(n - i ) ; j++){
            cout<<"  ";
        }
        // number
        for ( int j = i ; j > 0 ; j-- ){
            cout<<j<<" ";    
        }
        
        cout<<"\n";
    }
}
void print13(int n){
    int num = 1;
    for(int i = 1 ; i < n + 1 ; i++ ){
        for (int j = 0 ;j < i ; j++ ){
            cout<<num<<" ";
            num++;
        }
        cout<<'\n';
    }
}
void print14(int n){
    
    for(int i = 1 ; i < n + 1 ; i++ ){
        char num = 'A';
        for (int j = 0 ;j < n - i + 1 ; j++ ){
            cout<<num<<" ";
            num++;
        }
        cout<<'\n';
    }
}
void print15(int n){
    char num = 'A';
    for(int i = 1 ; i < n + 1 ; i++ ){
        for (int j = 0 ;j < i ; j++ ){
            cout<<num<<" ";
        }
        num++;
        cout<<'\n';
    }
}
void print16(int n){
    for ( int i = 0 ; i < n ; i++){
        char num = 'A';
        char num2 = 'A' + i - 1 ;
        for ( int j = 0 ; j < n - i - 1 ; j++){
            cout<<" ";
        }
        // for ( int j = 0 ; j < 2*(i + 1) - 1 ; j++){
        for ( int j = 0 ; j < (2 * i) + 1 ; j++){
            if( i < j ){
                cout<<num2;
                num2--;
                
            }
            else{
                cout<<num;
                num++;
            }
        }
        cout<<"\n";
    }
    
}
void print17(int n){
    for ( int i = 0 ; i < n ; i++){
        char num = 'A';
        char num2 = num + i - 1 ;
        for ( int j = 0 ; j < n - i - 1 ; j++){
            cout<<"  ";
        }
        // for ( int j = 0 ; j < 2*(i + 1) - 1 ; j++){
        for ( int j = 0 ; j < (2 * i) + 1 ; j++){
            if( i < j ){
                cout<<char(num - 2)<<" ";
                num--;
                
            }
            else{
                cout<<num<<" ";
                num++;
            }
        }
        cout<<"\n";
    }
}
void print18(int n){
    int k = n;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j <= i ; j++){
            cout<<char('A'+ k + j - 1 )<<" ";
        }
        k--;
        cout<<"\n";
    }
    
}
void print19(int n){
    for (int i = 0 ; i < n ; i++){
        // Star
        for(int j = 0 ; j < n ; j++){
            if ( i + j < n ){
                cout<<"* ";
            }
        }
        // Space
        for(int j = 0 ; j < 2 * i ; j++){
                cout<<"  ";
        }
        // Star
        for(int j = 0 ; j < n ; j++){
            if ( i + j < n ){
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
}
void print20(int n){
    for (int i = 0 ; i < n ; i++){
        // Star
        for(int j = 0 ; j <= i ; j++){
            cout<<"* ";
        }
        // Space
        for(int j = 2 * (n - i - 1 ) ; j > 0  ; j--){
                cout<<"  ";
        }
        // Star
        for(int j = 0 ; j <= i ; j++){
                cout<<"* ";    
        }

        cout<<"\n";
       
    }
}
void print21(int n){
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < i  + 1 ; j++ ){
            cout<<"* ";
        }
        //spaces
        for ( int j = 0 ; j < 2 * (n - i - 1) ; j++){
            cout<<"  ";
        }
        for ( int j = 0 ; j < i  + 1 ; j++ ){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void print21d(int n){
    for ( int i = 1 ; i < n + 1 ; i++ ){
        for ( int j = 0 ; j < n - i  + 1 ; j++ ){
            cout<<"* ";
        }
        //spaces
        for ( int j = 0 ; j < 2 * ( i - 1 ) ; j++){
            cout<<"  ";
        }
        for ( int j = 0 ; j <  n - i  + 1 ; j++ ){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void print22(int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            // cout<<i<<j<<" ";
            // if ( j > 0 && j < n - 1 && i > 0 && i < n - 1){
            if ( i != 0 && j != 0 && i != n -1 && j != n - 1 ){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
}
void print23(int n){
    int k = n + 1 ;
    for(int i = 1 ; i <= (2 * n) - 1 ; i++  ){
        for ( int j = 1 ; j <= (2 * n) - 1 ; j++ ){
            if (i == 1 ){
                cout<<k<<" ";
            }
        }
        
        cout<<"\n";
    }

}
int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        cout << "\n";
        // print1(n);
        // cout<<"\n";
        // print2(n);
        // cout<<"\n";
        
        // 
        // print7ss(n);
        // print7_ss(n);
        // cout<<"\n";
        // print19(n);
        // print20(n);
        // cout<<"\n";
        // print21(n);
        // print21d(n);
        print23(n);
    }
}