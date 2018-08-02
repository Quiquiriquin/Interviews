#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main (){
    int size,pos1,pos2;
    auto compare = 0;
    vector<vector<int>> sembradio(size,n);
    for(auto i : size){
        for(auto j: size){
            cin >> sembradio[i][j];
        }
    }
    for(auto i : size){
        for(auto j : size){
            if(sembradio[i][j] > compare)
                compare = sembradio[i][j];   
                pos1 = i;
                pos2 = j;
        }
    }
    cout << pos1 << pos2 << endl;
    return 0;
}