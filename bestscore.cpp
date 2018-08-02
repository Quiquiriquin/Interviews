#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <ctype.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    // Complete this function
    int max,min,indi;
    vector <int> copia(2);
    for(int i = 0; i < score.size();i++){
        if(i == 0){
            indi = score[i];
        }
        
    }

    return score;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}