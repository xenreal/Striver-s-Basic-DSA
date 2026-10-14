#include <bits/stdc++.h>
using namespace std;

void prime(int n , int start){
    if (n < 2){
        cout << "not defined";
        return;
    }

    if (n == 2 || n == 3){
        cout << n << " is a prime number";
        return;
    }

    if (n % start == 0){
        cout << n << " is not a prime number" ;
        return;
    }

   if ( start * start > n){
    cout << n << " is a prime number";
    return;
   }
 
   prime(n , start + 1);
}

int main (){
    int n;
    cout << "Enter the digit: ";
    cin >> n;

    prime(n , 2);

    return 0;
}