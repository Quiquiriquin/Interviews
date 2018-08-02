#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void ubication(int,pair<long long,long long>);

void ubication(int queries, pair <long long,long long> centro){
	vector <int> ans;
	long long x,y;
	cin >> centro.first >> centro.second;
	for(int i = 0; i < queries; i++){
		cin >> x >> y;
		if(x < centro.first){
			if(y > centro.second){
				ans.push_back(0);
			}
			if(y < centro.second){
				ans.push_back(2);
			}
		}
		if(x > centro.first){
			if(y > centro.second){
				ans.push_back(1);
			}
			if(y < centro.second){
				ans.push_back(3);
			}
		}
		if(x == centro.first || y == centro.second){
			ans.push_back(4);
		}

	}
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] == 0){
			cout << "NO" << endl;
		}
		if(ans[i] == 1){
			cout << "NE" << endl;
		}
		if(ans[i] == 2){
			cout << "SO" << endl;
		}
		if(ans[i] == 3){
			cout << "SE" << endl;
		}
		if(ans[i] == 4){
			cout << "divisa" << endl;
		}
	}
}

int main(){
	int queries = 1;
	pair <long long, long long> centro;
	while(queries != 0){
		cin >> queries;
		if(queries == 0){
			break;
		}
		ubication(queries,centro);
	}
	
	return 0;
}