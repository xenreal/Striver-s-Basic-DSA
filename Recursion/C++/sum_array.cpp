#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> &num , int n){
    int s = 0;
    if (n == 0){
        return num[0];
    }

    s = num[n] + sum(num , n-1);
    return s;
}


int sum_arr(vector<int> &nums){
    if (nums.empty()){
        return 0;
    }
    int n = nums.size();
    return sum(nums , n-1);
}

int main(){
    vector<int> nums;
    int n;
    char UserChoice;

    while(1){
     int num;
     cout << "Enter the element: ";
     cin >> num;
     nums.push_back(num);

     cout << "Type e to stop and c to continue: ";
     cin >> UserChoice;

     if (UserChoice == 'e' || UserChoice == 'E'){
        break;
     }

    }

    cout << "The sum of the array elemets is: " << sum_arr(nums);

    return 0;
}