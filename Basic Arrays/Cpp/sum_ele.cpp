#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int s = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter the element of array: ";
        cin >> arr[i];
    }

    for (int i = 0 ; i < n ; i++){
        s += arr[i];
    } 

    cout << "The sum: " << s ;

    return 0;
}