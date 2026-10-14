#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
    char A[52];
    int n;
    char a;
    cout << "Enter the number of elements you want to enter: " ;
    cin >> n;

    for(int i = 0 ; i < n ; i++ ){
        cout << "Enter character element: " ;
        cin >> A[i];
    }

    int hash[52] = {0};
    for (int i = 0; i < n ; i++){
     if (isupper(static_cast<unsigned char>(A[i]))){
        hash[A[i] - 'A']++;
     }
     else{
        hash[26 + (A[i] - 'a')]++;
     }
    }

    cout << "Enter the number of time you want to search: ";
    cin >> n;
    while (n--){
        cout << "Enter the element: ";
        cin >> a;

        if (isupper(static_cast<unsigned char>(a))){
          cout << "The frequency is = " << hash[a - 'A'] << endl;
        }

        else{
          cout << "The frequency is = " << hash[26 + (a - 'a')] << endl;
        }
    }

    return 0;
}