#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){

	long long test;
	int answer=0,data;
	double problems = 0;
	vector <int> ans;

	cin >> test;

	for(int i = 0; i < test;i++){
		cin >> data;
		ans.push_back(data);
		problems += data;
	}

	problems = ceil(problems/2);
	for(int i = 0; i < ans.size(); i++){
		answer += ans[i];
		if(answer > problems){
			cout << i+1 << endl;
			break;
		}
		if(answer == problems){
			cout << i + 1 << endl;
			break;
		}
	}



	return 0;
}