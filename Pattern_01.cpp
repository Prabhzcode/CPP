
#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
       for(int i = 0;i<n;i++){
          for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
   }
}

void pattern2(int n){
       for(int i = 0;i<n;i++){
          for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
   }
}

void pattern3(int n){
       for(int i = 1;i<=n;i++){
          for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
   }
}

void pattern4(int n){
       for(int i = 1;i<=n;i++){
          for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
   }
}

void pattern5(int n){
       for(int i = 1 ; i <= n;i++) {
          for(int j = 0 ; j<=n-i+1; j++) {
            cout << "* " ;
        }
        cout << endl;
   }
}

void pattern6(int n){
       for(int i = 1 ; i <= n;i++) {
          for(int j = 1 ; j<=n-i+1; j++) {
            cout << j ;
        }
        cout << endl;
   }
}

void pattern7(int n){
    for(int i = 0 ; i < n;i++) {
        //SPACE
        for(int j = 0 ; j<n-i-1; j++) {
            cout << "  " ;
        }
        //STAR
        for(int j = 0 ; j<2*(i+1)-1; j++) {
            cout << "* " ;
        }
        //SPACE
        for(int j = 0 ; j<n-i-1; j++) {
            cout << "  " ;
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i = 0 ; i < n;i++) {
        
        for(int j = 0 ; j<i; j++) {
            cout << "  " ;
        }
        
        for(int j = 0 ; j<2*(n-i)-1; j++) {
            cout << "* " ;
        }
        
        for(int j = 0 ; j<i; j++) {
            cout << "  " ;
        }
        cout << endl;
    }
}

void pattern9(int n){//pattter 7 and 8 can be called combined for this
    for (int i=0 ; i<n/2 ; i++){
        for ( int j = 0 ; j<(n/2-i)-1 ; j++){
            cout << "  ";
        }
        for(int j =0 ; j <2*(i+1)-1 ; j++ ){
            cout << "* ";
        }
        for( int j = 0 ; j<(n/2-i)-1 ; j++ ){
            cout << "  ";
        }
        cout << endl ;
    }

    for (int i=n/2 ; i<n ; i++){
        for ( int j = 0 ; j<(i-n/2) ; j++){
            cout << "  ";
        }
        for(int j =0 ; j <2*(n-i)-1 ; j++ ){
            cout << "* ";
        }
        for( int j = 0 ; j<(i-n/2) ; j++ ){
            cout << "  ";
        }
        cout << endl ;
    }
}

void pattern10(int n){
    for(int i= 1; i<=2*n-1;i++){
        int star = i;
        if (i>n) star = 2*n -1;
        for(int j=1 ; j<=star ; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}

int main(){
    int t ;//for test cases 
    cin >> t ;
    for (int i = 0 ; i<t;i++){
        int n;
        cin >> n;
        pattern10(n);

    }
}