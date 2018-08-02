class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string y = to_string(x);
        for(int i = 0; i < s.length()/2; i ++){
            swap(s[i],s[s.size() - 1 - i]);
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] != y[i]){
                return false;
            } 
            if(i == s.length() - 1){
                return true;
            }
        }
    }
};