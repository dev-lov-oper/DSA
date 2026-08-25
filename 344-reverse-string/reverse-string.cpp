class Solution {
public:
    void reverseString(vector<char>& s) {
     int l=0;
     int r=s.size()-1;
     f(l,r,s);
     
      
    }

    void f(int left,int right,vector<char>&s){
        if(left>right){
            return;
        }
        swap(s[left],s[right]);
        f(left+1,right-1,s);
        
    }

};