#include <bits/stdc++.h>
using namespace std;

void freq_sort(string &s){
    unordered_map<char , int> map;
    vector<vector<char>> freqArr(s.size()+1);
    for (int i = 0 ; i < s.size() ; i++){
        map[s[i]]++;
    }

    for (auto pair: map){
        char c = pair.first;
        int index = pair.second;
        freqArr[index].push_back(c);
    }

    for (int i = freqArr.size() - 1 ; i > 0 ; i--){
        if (!freqArr[i].empty()){
            for (auto c : freqArr[i]){
              cout << c << " appears " << i << " times \n";
            }
        }
    }


}

int main(){
    string s;

    cout << "Enter the string s: ";
    getline(cin , s);

    freq_sort(s);

    return 0;
}

