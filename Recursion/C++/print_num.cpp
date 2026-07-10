#include <iostream>
using namespace std;

class Solution{
    public: 
        void print_num(int n ){
            // if (n < 1){
            //    return;
            // }

            // else{
            //     cout << i << " ";
            //     print_num( n-1 , i + 1);

            // }

        if (n < 1) {
            return; 
        }

        print_num(n-1);

        cout << n << " ";

        }
};

int main (){
    Solution Solver;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solver.print_num(n);
}