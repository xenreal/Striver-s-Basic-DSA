#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Number of primes: " << countPrimes(n) << endl;
    return 0;
}