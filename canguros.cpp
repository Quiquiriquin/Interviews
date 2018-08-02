#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <ctype.h>

using namespace std;

int main(){

    int food,actions,canguros,cuenta = 0;
    char Act;
    cin >> food >> actions;
    vector <char> cola(actions);
    vector <int long long> cangu(actions);

    for(int i = 0; i < cases; i++){
        cin >> Act >> canguros;
        cola[i] = Act; 
        cangu[i] = canguros;
    } 
    for(int i = 0; i < cases; i++){
        if(cola[i] == 'A'){
            food = food - 
        }
    }
    return 0;
}
