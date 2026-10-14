#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter the element of array: ";
        cin >> arr[i];
    }

    unordered_map<int , int> hash;
    for (int i = 0 ; i < n ; i++){
        hash[arr[i]]++;
    }

   int highestFreq = -1, sec_highest_freq = -1;
    int highestElem = -1, sec_highestElem = -1;

    for (auto pair : hash){
        int element = pair.first;   
        int frequency = pair.second; 

        if (frequency > highestFreq) {
            sec_highest_freq = highestFreq;
            sec_highestElem = highestElem;
            
            highestFreq = frequency;
            highestElem = element;
        } 
        else if (frequency > sec_highest_freq && frequency != highestFreq) {
            sec_highest_freq = frequency;
            sec_highestElem = element;
        }
    }

    cout << "Second highest frequency element: " << sec_highestElem << " ( with " << sec_highest_freq << " times)";

    return 0;
}