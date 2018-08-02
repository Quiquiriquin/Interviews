#include <stdio.h>
#include <stdlib.h>
#include <string>
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        unsigned long long y = x;
        if(-2147483648L <= y <= 2147483647L){
            for(int i = 0; i < s.length()/2; i ++){
            swap(s[i],s[s.size() - 1 - i]);
            }
        } else {
            return 0;
        }
        
        if(s[s.size() - 1] == '-'){
            x = stol(s);
            return (-1)*x;
        }
        
        x = stol(s);
        return x;
    }
    
};