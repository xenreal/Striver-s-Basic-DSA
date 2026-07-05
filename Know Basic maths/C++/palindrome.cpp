#include <iostream>
using namespace std;

bool palindrone(int n){

    if (n < 0) return false;
    
    int og = n;
    long long rev = 0;
    int last_digit = 0;
    while (n > 0){
        last_digit = n % 10;
        rev = rev*10 + last_digit;
        n = n / 10;
    }
    
   return og == rev;

}

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "Is the number palindrone: " << palindrone(n) << endl;
}