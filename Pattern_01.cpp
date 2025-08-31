
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
        if (i>n) star = 2*n -i;
        for(int j=1 ; j<=star ; j++){
            cout << "* " ;
        }
        cout << endl;
    }
}

void pattern11(int n){
    int start = 1;
    for (int i = 1 ; i <= n ; i++ ){
        if( i%2 == 0) start = 0;
        else start = 1; 
        for (int j = 1 ; j<=i; j++){
            cout << start << " "  ;
            start =1 - start ;//MATHEMATICAL TOGGLE
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i = 1 ; i <=n ; i++ ){
        for(int j = 1 ; j <= i ; j ++){
            cout  << j << " ";
        }  
        for(int j = 1 ; j <= 2*(n-i) ; j ++){
            cout  << "  ";
        }
        for(int j = i ; j >= 1 ; j --){
            cout  << j << " ";
        }
        cout << endl ;
    }
}

void pattern13(int n){
    int start = 1;
    for (int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j<=i; j++){
            cout << start << " "  ;
            start +=1;
        }
        cout << endl;
    }
}

void pattern14(int n ){
    for (int i = 0 ; i < n ; i++){
        for (char ch= 'A' ; ch <= 'A' + i ; ch++){
            cout << ch << " " ;
        }
        cout << endl;
    }
}

void pattern15(int n ){
    for (int i = 1 ; i <= n ; i++){
        for (char ch= 'A' ; ch <= 'A' + n-i ; ch++){
            cout << ch << " " ;
        }
        cout << endl;
    }
}

void pattern16(int n ){
    for (int i = 0 ; i < n ; i++){
        char ch = 'A' + i;
        for (int j = 0 ; j <= i; j++){
            cout << ch << " " ;
        }
        cout << endl;
    }
}

void pattern17(int n){
    for (int i = 0 ; i < n ; i++ ){
        char ch1 = 'A' + i;
        for(int j = 0 ; j < n-i ; j ++){
            cout << "  ";
        } 
        for (char ch = 'A' ; ch <= 'A'+ i ; ch++){
            cout << ch << " ";
        }
        for(char ch = 'A' + i-1 ; ch >= 'A' ; ch--){
            cout << ch << " " ;
        }
        for(int j = 0 ; j < n-i ; j ++){
            cout << "  ";
        }
        cout << endl ; 
    }
}

void pattern18(int n){
    for (int i = 0 ; i <n ; i++){
        for (char j = 'A' + n-i-1; j < 'A'+ n ; j++){
            cout << j << " ";
        }
        cout << endl ;
    }
}

void pattern19(int n ){
    for (int i = 0 ; i<n ; i++){
        int flip_1 = n/2-i;
        int flip_2 = 2*i;
        if (i >= n/2) {
            flip_1 = i-n/2+1;
            flip_2 = 2*(n-i-1); 
        }
        for ( int j = 0 ; j < flip_1 ; j ++){
            cout << "* ";
        }
        for (int j = 0 ; j < flip_2 ; j ++){
            cout << "  ";
        }
              for ( int j = 0 ; j < flip_1 ; j ++){
            cout << "* ";
        }
        cout << endl ; 
    }
}

void pattern20(int n ){
    for (int i = 0 ; i<n ; i++){
        int flip_1 = i+1;
        int flip_2 = n-(2*i+1);
        if (i > n/2) {
            flip_1 = n-i;
            flip_2 = 2*i-n+1; 
        }
        for ( int j = 0 ; j < flip_1 ; j ++){
            cout << "*";
        }
        for (int j = 0 ; j < flip_2 ; j ++){
            cout << " ";
        }
              for ( int j = 0 ; j < flip_1 ; j ++){
            cout << "*";
        }
        cout << endl ; 
    }
}



int main(){
    int t ;//for test cases 
    cin >> t ;
    for (int i = 0 ; i<t;i++){
        int n;
        cin >> n;
        pattern20(n);

    }
}