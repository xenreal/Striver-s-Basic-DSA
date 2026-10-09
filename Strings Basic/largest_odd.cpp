#include <bits/stdc++.h>
using namespace std;

string largest_odd( string s){
    int n = s.size();
    int end;
    for (int i = n-1 ; i >= 0 ; i--){
       if ((s[i] - '0') % 2 != 0){
         end = i;
         break;
       }
    }

    if (end == -1) return "";

    int start = 0;
    while (start >= 0 && s[start] == '0'){
    start++;
   }

    int length = end - start + 1;
    return s.substr(start, length);
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin , str);

    cout << "The largest odd digit is: " << largest_odd(str);
    
    return 0;
}
    