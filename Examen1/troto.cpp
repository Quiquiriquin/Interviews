#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main () {

    int tareas, calif,suma_calif = 0,suma_tiempo =0,menor = 0,mayor = 0,calif2,ans;
    cin >> tareas >> calif;
    vector <int> casos(tareas);
    vector <int> tiempo(tareas);
    for(int i = 0; i < tareas; i++){
        cin >> casos[i] >> tiempo[i];
    }
    for(int i = 0; i < tareas; i++){
        if(casos[i] == calif){
            mayor = casos[i];
            menor = tiempo[i];
        }
        if(casos[i] == calif && tiempo[i] < menor){
            mayor = casos[i];
            menor = tiempo[i];
            cout << menor << endl;
            break;
        }
        else if(casos[i] < calif && i == 0){
            mayor = casos[i];
            menor = tiempo[i];
            suma_calif = mayor;
            suma_tiempo = menor;
        }
        else if(suma_calif < calif && i != 0){
            if()
        }
    }


    return 0;
}