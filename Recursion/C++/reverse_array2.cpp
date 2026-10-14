#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &a , int start , int end){
    if (start >= end){
        return;
    }

    swap(a[start] , a[end]);

    reverse(a , start +1 , end -1);
}

int main (){
    vector<int> a = {2,4,5,3,7};
    int n = a.size() -1;

    reverse(a,0,n);

    for (auto c : a){
        cout << c << " ";
    }

    return 0;
}