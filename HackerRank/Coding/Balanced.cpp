#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

stack <char> pila;

bool is_balanced(string expression) {
    int f;
    for(int i = 0; i < expression.length(); i++){
        if(pila.empty()){
            if(expression[i] == '(')
                    f = 1;
            if(expression[i] == '[')
                    f = 2;
            if(expression[i] == '{')
                    f = 3;
            
            pila.push(expression[i]);
        }else{
            if(expression[i] == '(' || expression[i] == '{' || expression[i] == '['){
                if(expression[i] == '(')
                    f = 1;
                if(expression[i] == '[')
                    f = 2;
                if(expression[i] == '{')
                    f = 3;
                pila.push(expression[i]);
            }else if(f = 1 && expression[i] == ')'){
                pila.pop();
        }   else if(f = 2 && expression[i] == ']'){
                pila.pop();
    }   else if(f = 3 && expression[i] == '}'){
                pila.pop();
}   else{
                return 0;
        }}
            
    }
    
    return pila.empty();
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

