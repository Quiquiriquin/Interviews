#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;



int main (){
    int size, tiempo;
    char a;
    cin >> size >> tiempo;

    vector <char> cola(size);

    for(int i = 0; i < size; i++){
        cin >> a;
        cola[i] = a;
    } 
    for(int i = 0; i < tiempo;i++){
        for(int j = 0; j < size;j++){
            if(cola[j] == 'B' && cola[j+1] == 'G'){
                swap(cola[j],cola[j+1]);
                j+=1;
            }
        }
    }
    for(int i = 0; i < size; i++){
        cout << cola[i];
    }

    return 0;
}
