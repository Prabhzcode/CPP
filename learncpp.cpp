/* 1st 
#include <bits/stdc++.h>
using namespace std;

// wap to input age and check wheter u are an addult or not
int main() {
int age ;
cin >> age ;
if (age >= 18) cout << "adult ";
else cout << "not an adult ";
return 0;
}
*/


/* 2nd(if condition)
#include<bits/stdc++.h>
using namespace std;
// school grading
int main() {
int marks ;
cin >> marks ;
if ( marks < 25 ) cout << "F" ;
else if ( marks < 45)  cout << "E" ;  
else if ( marks < 50) cout << "D" ;
else if ( marks < 60) cout << "C" ;
else if ( marks < 80) cout << "B" ;
else if ( marks < 101) cout << "A" ;

}
*/


/* 3rd (array basic)
#include<bits/stdc++.h>
using namespace std;
// array input / output 

int main() {
    int arr[5];
    cin >> arr[1] >> arr [2] >> arr [3] >> arr[4] >> arr[5] ;
    cout << arr [4];
    
     return 0;
}
*/


/* 4th (string)
#include<bits/stdc++.h>
using namespace std;
// strings (array of characters)
int main () {
    string s;
    cin >> s;
    int len = s.size();// size of string 
    s[len-1] = 'z';
    cout << s;

}
*/


/*5th (loop)
#include<bits/stdc++.h>
using namespace std;
// for loop (patternsss)
int main() {
    int i = 1;
        do {
        cout << "prabh" << endl;
        i++;
    } while (i <=1);
    

}
*/


/*FUNCTIONS
//VOID -> Doesnt return anything
//RETURN
//PARAMETERISED
//NON PARAMETERISED
#include<bits/stdc++.h>
using namespace std;
void printname( string name) {
    cout << " Welcome --> " << name << endl;
}
int main () {
    string name , name1 ;
    cin >> name >> name1 ;
    printname(name);
    printname(name1);
    return 0;
    

}
*/


//Time Complexity  Big-O-noataion 
