
class Solution {
public:
    bool isPalindrome(string s) {
       
        string ns;
    for(char c : s){
        if(isalnum(c)){
         ns+=tolower(c);
      }
     }
      int n=ns.size();
        if(check(ns,0,n)){
            return true;
        }
        return false;
    }

    bool check(string &s,int i,int n){
        if(i>=n/2){
            return true;
        }
        if(s[i]!=s[n-i-1]){
            return false;
        }
        return check(s,i+1,n);
    }
};