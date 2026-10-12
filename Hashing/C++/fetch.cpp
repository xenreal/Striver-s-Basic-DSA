#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the array Size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "ENTER ELEMENT: " ;
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // q is literally just the number of times the user wants to search.
    int q;
    cout << "Enter the number of times you want to search: ";
    cin >> q;
    while (q--) {
        int number;
        cout << "Enter the number you want to search" ;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}
