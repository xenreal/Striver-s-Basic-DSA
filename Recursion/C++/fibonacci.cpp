#include <iostream>
using namespace std;

class solution {
    public: 
        int fibo(int n) {
            if (n <= 0) {
                return 0;
            }
            if (n == 1) {
                return 1;
            }
            return fibo(n - 1) + fibo(n - 2);
        }
};

int main() {
    solution solver;
    int n;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << solver.fibo(i) << " ";
    }
    cout << endl;

    return 0;
}