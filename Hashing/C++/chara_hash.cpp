#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    // Here the whole string gets turned into an array, with their ascii values
    cout << "Enter the String: ";
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cout << "Enter the times you want to search: ";
    cin >> q;
    while (q--) {
        char c;
        cout << "Enter the Letter whose frequency is to be found: ";
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}
