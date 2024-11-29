#include<iostream>
using namespace std;

int main(){
    int x ;
    int y = 0;
    int z = 0;
    cout << "Enter an integer: ";
    cin >> x;  
    while (x !=0 ) {  
    if (x%2 == 0) {
        y++;} else{
        z++;}
        cout << "Enter an integer: ";
    cin >> x;
   }
    cout << "#Even numbers = ";
    cout << y << "\n";
    cout << "#Odd numbers = ";
    cout << z;
 return 0;}

