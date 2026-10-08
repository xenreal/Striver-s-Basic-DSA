#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    bool isPalin = true;
    
    cout << "Enter a string: ";
    getline(cin , str);
 
    int n = str.size();

    for (int i = 0 ; i < n/2 ; i++){
        if (str[i] != str[n-i-1]){
            isPalin = false;
            break;
        }
    }
    
    cout << "Is the the string a palindrone? " << boolalpha << isPalin ;
    
    return 0;
}
    