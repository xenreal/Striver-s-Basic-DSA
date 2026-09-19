#include <iostream>
using namespace std;

class Solution{
    public:
      int sum(int n){
        int s = 0;
        if (n < 1){
            return 0;
        }
        s = n + sum(n-1);

        return s;
      }
};

int main() {
    Solution Solver;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << Solver.sum(n);
}