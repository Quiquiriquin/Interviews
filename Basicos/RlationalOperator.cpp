#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <char> ans;

	int it;
	long long left,right;

	cin >> it;
	for (int i = 0; i < it; i++){
		cin >> left >> right;
		if(left < right){
			ans.push_back('<');
		}
		if(left > right){
			ans.push_back('>');
		}
		if(left == right){
			ans.push_back('=');
		}
	}
	for(int i = 0; i < ans.size();i++){
		cout << ans[i] << endl;
	}
	return 0;
}