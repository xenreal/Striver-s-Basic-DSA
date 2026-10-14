#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,2,3,3,5};

    unordered_map<int , int> hash;
    for (int i = 0 ; i < 6 ; i++){
        hash[arr[i]] ++;
    }

    int f;
    int n;
    cout << "Enter the number of times you want to search" ;
    cin >> f;
    while(f--){
        cout << "Enter Number: " ;
        cin >> n;
        cout << "The frequency is = " << hash[n] << endl;
    }

    return 0;
}