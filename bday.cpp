#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    sort(ar.begin(),ar.end());
    int size = n;
    int contador = 0;
    for(int i = 0; i < size; i++){
        if(ar[i] == ar[size - 1]){
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
