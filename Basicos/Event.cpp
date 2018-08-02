#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main (){
	int participants,hotels,weeks,price,rooms;
	long long budget;

	vector <int> ans;

	cin >> participants >> budget >> hotels >> weeks;
	
	for(int i = 0; i < hotels; i++){
		
		cin >> price;
		
		for(int j = 0; j < weeks; j++){
			cin >> rooms;
			
			if(rooms == 0){
				ans.push_back(0);
				
			} else {
				if(ans.)
				price += price;
			}
		}
		ans.push_back(price);
	}
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] == 0){
			cout << "stay home" <<endl;
		} else {
			cout << ans[i] << endl;
		}
	}



	return 0; 
}