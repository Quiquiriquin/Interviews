#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){

    int type,players,difference;
    int ans = 0;
    cin >> players >> type >> difference;
    players += 1;
    vector <int> jugadores;
    for(int i = 0; i < players; i++){
        int current_army;
        cin >> current_army;
        jugadores.push_back(current_army);
        if(i == players - 1){
            for(int j = 0; j < players-1; j++){
                if(jugadores[players-1] - jugadores[j] <= difference && jugadores[players-1] - jugadores[j] > 0 ){
                    ans += 1;
                }
            }   
        }
    }
    cout << ans << endl;
    return 0;
}