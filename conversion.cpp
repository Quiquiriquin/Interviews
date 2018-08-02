#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    int j = 0;
    int flag = 0;
    string primero;
    for(int i = 0; i < s.size(); i++){
        if(i<=1){
             if(i == 0){
            primero = s[i];
              }
            if(i == 1){
            primero = primero + s[i];
             }
        }
        else{
            if(s[i]== 'P'){
                if (primero[j] == '0' && (primero[j+1]!='2' || primero[j+1]=='2')){
                    primero[j] = primero[j] + 1;
                    primero[j+1] = primero[j+1] + 2;
                    flag = 1;
                }
                else if(primero[j]=='1' && primero[j+1]!='2'){
                    primero[j] = primero[j] + 1;
                    primero[j+1] = primero[j+1] + 2;
                    flag = 1;
                }
                else if(primero[j]=='1' && primero[j+1]=='2'){
                    break;
                }
            }
            else if(s[i]=='A'){
                if(primero[j]=='1' && primero[j+1] =='2'){
                    primero[j] = '0';
                    primero[j+1] = '0';
                    flag = 1;
                }
            }
        }
    }
    if(flag != 0){
        s[0] = primero[0];
        s[1] = primero[1];
    }
    s.erase(8,9);
    
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}