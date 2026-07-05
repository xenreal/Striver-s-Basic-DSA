#include <iostream> 
using namespace std;

int rev(int n){
    int rev = 0;
    float last_dig;
    while (n > 0){
      last_dig = n % 10;
      rev = rev*10 + last_dig;
      n = n / 10;
    }
    return rev;
}

int main(){
    int N;
    cout << "Enter the number : " ;
    cin >> N;
    int rev_digit = rev(N);
    cout << "The reverse Digits is " << rev_digit << endl;
} 