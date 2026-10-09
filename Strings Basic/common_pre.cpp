#include <bits/stdc++.h>
using namespace std;

string comman_prefix( vector<string> &s){
    if (s.empty()){
        return "";
    }

    for (int i = 0 ; i < s[0].length() ; i++ ){

        char c = s[0][i];
        
        for (int j = 1 ; j < s.size() ; j++){
         if (i == s[j].length() || s[j][i] != c ){
            return s[0].substr(0,i);
         }

        }
    }

    return s[0];
    
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
    