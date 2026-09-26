#include <bits/stdc++.h>
using namespace std;
    
vector<int> divisors(int n) {
    vector<int> div; 
    for (int i = 1 ; (long long)i*i <= n ; i++){
        if ( n % i == 0){
            div.push_back(i);
            if ( i != n/i){
                div.push_back(n/i);
            }

            sort(div.begin() , div.end());
        }
    }
    return div;
    }

int main (){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int num : divisors(n)){
        cout << num << " ";
    }

    return 0;
}