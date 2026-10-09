#include <bits/stdc++.h>
using namespace std;

string comman_prefix( vector<string> &s){
    if (s.empty()){
        return "";
    }

    string prefix = s[0];

    for (int i = 1 ; i < s.size() ; i++ ){
        string containPrefix = s[i];
        while (containPrefix.find(prefix) != 0){
            prefix.pop_back();
            if (prefix == ""){
                return prefix;
            }
        }
    }

    return prefix;

}

int main() {
    vector<string> str;

    cout << "Enter 4 words: " << endl;
    for (int i = 0 ; i < 4 ; i++){
     string tempWord;
     cout << "Enter the word: " ;
     cin >> tempWord;
     str.push_back(tempWord);
    }
    
    cout << "The comman prefix is: " << comman_prefix(str);
    
    return 0;
}
    