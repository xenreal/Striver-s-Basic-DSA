#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin , str);

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
    