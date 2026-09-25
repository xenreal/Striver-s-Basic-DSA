#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
    int perfect = 1;
    for ( int i = 2 ; (long long)i*i < n ; i++){
        if (n % i == 0){
            perfect += i;
            if ( i != n/i){
                perfect += n/i;
            }
        }
    }

    return perfect == n;
    }
};

int main(){
    Solution sol;
    int n;

    cout << "Enter the number : " ;
    cin >> n;

    cout << "is the perfect number: " << boolalpha << sol.isPerfect(n);

    return 0;
}