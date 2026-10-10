#include <bits/stdc++.h>
using namespace std;

bool isIso(string &s , string &t){
    if (s.length() != t.length()){
        return false;
    }

    unordered_map<char , char> map;
    unordered_set<char> used;
    
    for (int i = 0 ; i < s.length() ; i++){
        if (map.count(s[i])){
            if (map[s[i]] != t[i]){
                return false;
            }
        }

        else{
            if (used.count(t[i])) {
            return false;
        }
           map[s[i]] = t[i];
           used.insert(t[i]);
        }
    }

    return true;
}

int main(){
    string s;
    string t;

    cout << "Enter the string 1: ";
    getline(cin , s);
    
    cout << "Enter the string 2: ";
    getline(cin , t);

    cout << "Are the string Isomorphic: " << boolalpha << isIso(s , t);

    return 0;
}