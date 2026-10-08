#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> str;
    char ch;
    
    cout << "Enter a string: ";
    while (cin.get(ch) && ch != '\n') {
        str.push_back(ch);
    }

    int n = str.size();
    
    for (int i = 0 ; i < n/2 ; i++){
        swap(str[i] , str[n-i-1]);
    }
 
   // reverse(str.begin(), str.end());

   cout << "The output is: ";
   for (int i = 0; i < n; i++) {
        cout << str[i];
    }

    cout << endl;
    
    return 0;
}
    