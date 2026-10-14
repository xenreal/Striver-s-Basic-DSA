#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &a , int start){

    if (a.empty()){
        cout << "The array is empty" ;
        return;
    }

    int n = a.size() - 1;
    if (start == n){
        cout << "The array is sorted";
        return;
    }

    if (a[start] > a[start+1]){
        cout << "The array isn't sorted";
        return;
    }

    sort(a , start +1);
}

int main (){
    vector<int> a = {2,4,5,3,7};

    sort(a,0);

    return 0;
}