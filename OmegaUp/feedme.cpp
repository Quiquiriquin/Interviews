#include <iostream>
#include <vector>

using namespace std;

int maxMeals(vector <int> meals, int beg, int mask,int m){

    if(beg == m)
        return 0;
    
    int ans = 0;

    if(!(mask & meals[beg]))
        ans = max(ans, 1 +  maxMeals(meals, 1 + beg, mask | meals[beg],m));
    
    
    ans = max(ans, maxMeals(meals, beg + 1, mask,m));

    return ans;
}

int main () {
    // n Number of cases. m Number of recipes in the book  
    int n, m;
    cin >> n >> m;
    vector <int> meals(m);

    for(int i = 0; i < n;i++){
        int needed;
        cin >> needed;
        for(int j = 0; j < needed; j++){
            int ing;
            cin >> ing;
            meals[i] |= (1 << ing);
        }
    }

    cout << maxMeals(meals,0,0,m) << endl;


    return 0;
}