#include <bits/stdc++.h>
using namespace std;

int LCM(int n1,int n2) {
    int count = 1;
    if (n1 <= 0 || n2 <= 0){
        return 0;
    }
    if (n1 > n2){
        while (true){
         long long counter = 0;
         counter = n1 * count;
         if (counter % n2 == 0){
            return counter;
         }
         count += 1;
        }
    }
    else{
        while (true){
         int counter = 0;
         counter = n2 * count;
         if (counter % n1 == 0){
            return counter;
         }
         count += 1;
        }
    }
    }

int main(){
    int n1 , n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    cout << "The LCM is: " << LCM(n1 , n2);

    return 0;
}