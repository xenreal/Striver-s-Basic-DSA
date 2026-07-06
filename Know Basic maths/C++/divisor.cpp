#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
         vector<int> divisor(int n){
            vector<int> div_arr;
            for ( int i = 1 ; i <= n ; i++) {
                if (n%i == 0) {
                    div_arr.push_back(i);
                }
            }
            return div_arr;
         }
};

int main() {
    vector<int> result;
    Solution Solver;
    int n;
    cout << "Enter the number: " ;
    cin >> n;
    result = Solver.divisor(n);
    for (int num : result) {
        std::cout << num << " ";
    }
    

}