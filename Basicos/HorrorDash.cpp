#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int test, students, speed,j = 0,aux;
	vector <int> ans;
	cin >> test;
	for(int i = 0; i < test; i++){
		j = 0;
		cin >> students;
		while(j < students){
			cin >> speed;
			if(j == 0){
				ans.push_back(speed);
			}else{
				if(ans[i] < speed)
					ans[i] = speed;
			}
			j++;
		}
	}
	for(int i = 0; i < ans.size(); i++){
		cout << "Case " << i+1 << ": " << ans[i] << endl;
	}
	return 0;
}