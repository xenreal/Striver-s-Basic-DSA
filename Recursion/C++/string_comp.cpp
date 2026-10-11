#include <iostream>
#include <string>
using namespace std;

class solution{
    public: 
          bool comp(string &s , int p1 , int p2 ){
              if ( p1 >= p2){
                return true;
              }

              if (s[p1] != s[p2]){
                return false;
              }

              return comp(s,p1+1,p2-1);
        }
};

int main(){
    solution solver;
    string s = "ABCDCBA";
   if (solver.comp(s,0,s.size()-1)){
    cout << s << " is a palindrome";
   }
   else{
    cout << s << " is not a palindrome";
   }
}