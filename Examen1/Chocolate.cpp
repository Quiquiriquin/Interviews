#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int m,n,x,y,suma = 0,suma2 = 0;
    cin >> m >> n;
    if(m < 2 && n < 2)
        return 0;
    
    for(int i = 0; i < m-1; i++){
        cin >> x;
        suma = suma + x;
    }
    for(int i = 0; i < n-1 ;i++){
        cin >> y;
        suma2 = suma2 + y;
    }
    suma = (n*suma) + suma2;
    if(suma > 1000)
        return 0;
    cout << suma << endl;
    return 0;
}