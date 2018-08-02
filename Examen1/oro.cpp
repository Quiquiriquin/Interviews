#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    int rocas, oro, suma = 0,restante,diferencia = 1,indicador = 0,x = 0;
    cin >> rocas >> oro;
    if(rocas > 20)
        return 0;
    vector <int long long> rocass(rocas);
    for(int i = 0; i < rocas;i++){
        cin >> rocass[i];
        if(rocass[i] > 1000000)
            return 0;
        suma = suma + rocass[i];
        sort(rocass.begin(),rocass.end());
    }

    restante = suma - oro;
    
    for(int i = 0; i < rocas;i++){
        if(restante - rocass[i] < restante && (restante - rocass[i] >= 0 || restante - rocass[i] == 1) ){
            cout << restante - rocass[i] << endl;
            return 0;
        } else {
            for(int j = 0; j < rocas;j++){
                if(restante - rocass[i] - rocass[j] < restante && (restante - rocass[i] - rocass[j] >= 0 || restante - rocass[i] - rocass[j] == 1) ){
                    cout << restante - rocass[i] -rocass[j] << endl;
                    return 0;
                }   
            }
        }
    }
    return 0;
}
