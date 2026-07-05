#include <iostream>
using namespace std;

int gcd(int n1 , int n2){
    while (n1 > 0 and n2 > 0){
        if (n1> n2){
            n1 = n1 % n2;
        }

        else{
            n2 = n2 % n1;
        }
    }

    return (n1 > 0) ? n1 : n2;
}

int main() {
    int n1 , n2 , res;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    res = gcd(n1,n2);
    cout << "The result is " << res;
}