#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , MaxFreq , Ele;
    cout << "Enter the array size: " ;
    cin >> n ;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cout << "Enter Element: " ;
        cin >> arr[i];
    }

    unordered_map<int,int> hash;
    for (int i = 0 ; i < n ; i++){
        hash[arr[i]]++;
    }
    
    Ele = 0;
    MaxFreq = 0;
    for (auto entry : hash){
        if (MaxFreq < entry.second){
            Ele = entry.first;
            MaxFreq = entry.second;
        }
    }

    cout << "Element: " << Ele << " Frequency: " << MaxFreq;

    return 0;

}