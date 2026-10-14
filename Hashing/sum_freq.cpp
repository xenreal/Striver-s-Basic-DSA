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

   int highestFreq = -1, smallest_freq = INT16_MAX;
    int highestElem = -1, smallestElem = -1;

    for (auto pair : hash){
        int element = pair.first;   
        int frequency = pair.second; 

        if (frequency > highestFreq) {
            highestFreq = frequency;
            highestElem = element;
        } 
        else if (frequency < smallest_freq) {
            smallest_freq = frequency;
            smallestElem = element;
        }
    }

    cout << "Sum of highest and lowest frequency is: " << smallest_freq + highestFreq << " ( with highest freq: " << highestFreq << " and lowest freq: " << smallest_freq << ")";

    return 0;
}