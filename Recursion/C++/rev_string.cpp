#include <bits/stdc++.h>
using namespace std;

vector<char> reverse_str( vector<char> &s , int p1 , int p2){
    if (p1 >= p2){
        return s;
    }

    else{
        swap(s[p1] , s[p2]);
        return reverse_str(s , p1+1,p2-1);
    }

}

vector<char> rev_str( vector<char> &s){
    int n = s.size();
    return reverse_str(s,0,n-1);
}

int main(){
    string s;

    cout << "Enter the string: ";
    getline(cin , s);

    vector<char> str(s.begin(), s.end());
    rev_str(str);

    for (auto c : str){
        cout << c << " " ;
    }

    return 0;
}