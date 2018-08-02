#include <vector>
#include <iostream>

/* Formato de entrada

4 --- Numero del tamaño del arreglo
5 3 1 2    Datos que hay en el arreglo

Salida

0.50000  cantidad de Numeros positivos / tamaño del arreglo
0.3333   dantidad de NUmeros negativos / tamaño del arreglo
0.1666   cantidad de Numeros 0 / tamaño del arreglo

*/

using namespace std;

vector<string> split_string(string);

/*
 * Complete the plusMinus function below.
 */
void plusMinus(vector<int> arr) {
    /*
     * Write your code here.
     */
    vector <float> ans(3,0);
    for(int i = 0; i < arr.size();i++){
        if(arr[i] > 0)
            ans[0] += 1; 
        if(arr[i] == 0)
            ans[2] += 1;
        if(arr[i] < 0)
            ans[1] += 1;  
    }
    for(int i = 0; i < 3; i++){
        printf("%f\n",ans[i]/arr.size());
        //cout << ans[i]/arr.size() << endl;
    }
    

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int arr_itr = 0; arr_itr < n; arr_itr++) {
        int arr_item = stoi(arr_temp[arr_itr]);

        arr[arr_itr] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}