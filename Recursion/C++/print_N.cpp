#include <iostream>
#include <string>
using namespace std;

class Solution{
    public:
          void print_word(string s , int n){
                if (n < 1){
                    return;
                }

                else{
                    cout << s << " ";
                    print_word(s , (n-1));
                }
          }
};

int main() {
    Solution Solver;
    string s;
    int n;
    cout << "Enter the number times you want to call it: " ;
    cin >> n;
    cin.ignore(); 
    cout << "Enter the text: ";
    getline(cin, s);
    cout << "\nResult: ";
    Solver.print_word(s, n);
}