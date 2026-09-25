#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
    int large = 0 , remain;
    while (n > 0){
      remain = n % 10;
      if (remain > large){
        large = remain;
      }
      n /= 10;
    }
    return large;
    }

};

int main(){
    Solution sol;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The largest number in " << n << " is: " << sol.largestDigit(n);
    return 0;
}