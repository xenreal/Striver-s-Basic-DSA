#include <iostream>
#include <cmath>
using namespace std;

class solution{
    public:
          bool check_prime( int n ){
             int sq = (int)round(pow(n,0.5));
             if (n<=1){
                return false;
             }
             
             for ( int i = 2 ; i<= sq ; i++)
                 if (n % i == 0){
                    return false;
                 }

             return true;
          }
};

int main(){
    solution solver;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool con = solver.check_prime(n);
    cout << "is the number prime: " << boolalpha << con ;
}