#include <bits/stdc++.h>
using namespace std;

bool CanRotate(string &s , string &goal){
    if (s.length() != goal.length()){
        return false;
    }

    string doubled = s + s;
    if (doubled.find(goal) == string::npos) {
    return false;
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

    cout << "can Rotate: " << boolalpha << CanRotate(s , goal);

    return 0;
}

