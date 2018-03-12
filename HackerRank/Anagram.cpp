#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    int size;
    int size1 = a.size(),size2 = b.size();
    if(a > b)
        size = size1;
    if(b > a)
        size = size2;
    if(b == a)
        size = size1;
    vector <int> pos;
    for(int i = 0; i < size;i++){
        if(a[i] == b[i])
            pos.push_back(i);
    }
    int number;
    number = (size1 - pos.size()) + (size2 - pos.size());
    return number;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}