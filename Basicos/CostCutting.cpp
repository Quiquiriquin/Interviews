#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector <long long> salarios;
	vector <int> ans;
	int cases,j = 0;
	long long salaries,aux;
	cin >> cases;
	for(int i = 0; i < cases ; i++,j++){
		j = 0;
		while(j < 3){
			if(j != 2){
				cin >> salaries;
				salarios.push_back(salaries);
			} else {
				cin >> salaries;
				salarios.push_back(salaries);
				sort(salarios.begin(),salarios.end());
				ans.push_back(salarios[1]);
				salarios.clear();
			}
			j++;
		}
		
	}
	for(int i = 0; i < ans.size(); i++){
		cout << "Case " << i+1 << ": " << ans[i] << endl;
	}

	return 0;
}