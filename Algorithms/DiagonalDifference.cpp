#include <iostream>
#include <vector>

/* Formato de entrada
3 --- Tamaño de matriz
1 1 1 \
1 1 1 | - Datos separados por espacios y enters  
1 1 1 /
 
*/

using namespace std;

/*
 * Complete the diagonalDifference function below.
 */
int diagonalDifference(vector<vector<int>> a) {
    /*
     * Write your code here.
     */
    //Positive add
    int pos_ans = 0;
    int neg_ans = 0;
    for(int i = 0; i < a.size();i++){
        for(int j = 0; j < a.size(); j++){    
            if(i == j){
                pos_ans += a[i][j];
            } 
        }
    }
    for(int i = 0; i < a.size();i++){
        for(int j = a.size()-1; j < a.size(); j--){    
            if(j == a.size()-1 -i){
                neg_ans += a[i][j];
            } 
        }
    }
    
    return abs(pos_ans - neg_ans);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> a(n);
    for (int a_row_itr = 0; a_row_itr < n; a_row_itr++) {
        a[a_row_itr].resize(n);

        for (int a_column_itr = 0; a_column_itr < n; a_column_itr++) {
            cin >> a[a_row_itr][a_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a);

    fout << result << "\n";

    fout.close();

    return 0;
}