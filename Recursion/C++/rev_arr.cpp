#include <iostream>
#include <vector>
using namespace std;

class solution{
    public: 
         vector<int> rev_arr( vector<int>& arr ){
            int i = 0 , n = arr.size()-1;
            while (n > i){
                swap(arr[i] , arr[n]);
                i++;
                n--;
            }
            return arr;
         }
};

int main() {
    solution solver;
    vector<int> arr = {1 ,2 , 3, 4, 5};
    solver.rev_arr(arr);
    for (int n : arr){
        cout << n << " ";
    }
}