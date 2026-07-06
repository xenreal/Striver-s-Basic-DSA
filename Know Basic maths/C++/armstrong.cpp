#include <iostream>
#include <cmath>
#include <string> // Added for the digit counting trick
using namespace std;

// class Solution{
//     public:
//         int isArmstrong(int n){
//             int a = n , cnt = 0 , sum = 0;
            
//             if (n==1){
//                 return 1;
//             }
//             while (n>0){
//               cnt += 1;
//               n = n / 10;
//             }

//             while (a>0){
//                 int last;
//                 last = a % 10;
//                 sum += (int)round(pow(last,cnt));
//                 a /= 10;
//             }

//             return sum;
            
//         }
// };


// int main () {
//     Solution Solver;
//     int n;
//     cout << "Enter the number to check: ";
//     cin >> n;
//     cout << n << " is an armstrong num ? = " << (n == Solver.isArmstrong(n)) ;

// }


// better code
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int cnt = to_string(n).length(); 
        
        int temp = n;
        int sum = 0;
        
        while (temp > 0) {
            int last = temp % 10;
            sum += (int)round(pow(last, cnt));
            temp /= 10;
        }
        
        return sum == n;
    }
};

int main() {
    Solution Solver;
    int n;
    cout << "Enter the number to check: ";
    cin >> n;
    
    // Now the class handles the check, and main just prints the result
    if (Solver.isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is NOT an Armstrong number." << endl;
    }
    
    return 0;
}