#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string &s , string &goal){
    if (s.length() != goal.length()){
        return false;
    }

    unordered_map<char , int> map;
    for (int i = 0 ; i < s.length() ; i++){
        map[s[i]]++;
        map[goal[i]]--;
    }
    
    for ( auto pair: map){
        if (pair.second != 0){
            return false;
        }
    }

    return true;
}

int main(){
    string s;
    string goal;

    cout << "Enter the string s: ";
    getline(cin , s);
    
    cout << "Enter the goal: ";
    getline(cin , goal);

    cout << "is Anagram?: " << boolalpha << isAnagram(s , goal);

    return 0;
}

