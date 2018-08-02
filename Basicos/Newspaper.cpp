#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector <int> value(255,0);
	char letter;
	int tests,num_char,values;
	double ans = 0;

	cin >> tests >> num_char;

	while(tests--){
		while(num_char--){
			char text;
			cin >> text;
			int letter = text;
			cin >> values;
			value[letter] = values;
		}
		int lines;
		cin >> lines;
		char text;
		while(lines--){
			while(text != '\n'){
				int letter = text;
				ans += value[letter];
			}
		}
		
		printf("%.2f$", ans);
	}


	return 0;
}