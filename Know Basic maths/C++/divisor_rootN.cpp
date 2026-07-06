#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
    public:
        vector<int> create_arr (int n){
            vector<int> div_arr;
            int c = (int)round(pow(n,0.5));
            for (int i = 1 ; i <= c ; i++){
                if (n % i == 0){
                    div_arr.push_back(i);

                    if (i != n/i){
                        div_arr.push_back(n/i);
                    }
                }
            }
            sort(div_arr.begin(), div_arr.end());

            return div_arr;
        }
};

int main(){
    Solution Solver;
    vector<int> res;
    int n;
    cout << "Enter number: ";
    cin >> n;
    res = Solver.create_arr(n);
    for (int num : res){
        cout << num << " ";
    }

}