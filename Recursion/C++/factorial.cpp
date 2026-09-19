#include <iostream>
using namespace std;

class solution {
    public:
          long long fact(int n){
            long long f;
            if (n<1){
                return 1;
            }
            
            f = n * fact(n-1);

            return f;

          }
};

int main(){
    int n;
    solution solver;
    cout << "Enter the number: ";
    cin >> n;
    long long res = solver.fact(n);
    cout << res;
}