#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <string.h>

using namespace std;

int main (){
    string cad;
    getline(cin,cad);
    for(int i = 0; i < cad.length();i++){
        if(cad[i] < 65 || (cad[i] > 90 && cad[i] < 97) || cad[i] > 122 || cad[i]!=32)
            cad.erase(i,1);
    }
    cout << cad << endl;



    return 0;
}