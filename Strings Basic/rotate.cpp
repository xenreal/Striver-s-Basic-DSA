#include <bits/stdc++.h>
using namespace std;

bool CanRotate(string &s , string &goal){
    char temp;
    int n = s.length();

    if (s.length() != goal.length()){
        return false;
    }
    
    for (int i = 0 ; i < n ; n++){
        if (s == goal){
            return true;
        }
        
        temp = s[0];
        s.erase(0 ,1);
        s.push_back(temp);
    }

    return false;
}

int main(){
    string s;
    string goal;

    cout << "Enter the string s: ";
    getline(cin , s);
    
    cout << "Enter the goal: ";
    getline(cin , goal);

    cout << "can Rotate: " << boolalpha << CanRotate(s , goal);

    return 0;
}

