#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool b = true;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter the element of array: ";
        cin >> arr[i];
    }

    for (int i = 0 ; i < n-1 ; i++){
        if (arr[i] > arr[i+1]){
            b = false;
            break;
        }
    } 

    cout << "Is the array sorted? " << boolalpha << b ;

    return 0;
}