#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
      int count = 0;
      int remain;
      while ( n > 0 ){
        remain = n % 10;
        if (remain % 2 == 1 || remain == 1){
            count += 1;
        }
        n = n / 10;
      }

      return count;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of odd number in " << n << " are : " << sol.countOddDigit(n);

    return 0;

}