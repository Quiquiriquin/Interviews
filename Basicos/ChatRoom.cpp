//Link of the problem http://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int checkans(char, int);

int checkans(char letter, int estado){	//Function to check if we could built hello.
	if(estado == 0 && letter == 'h')	// If letter = h, return 1
		return 1;						
	if(estado == 1 && letter == 'e')	// If letter = h, return 1	
		return 1;
	if((estado == 2 && letter == 'l') || (estado == 3 && letter == 'l')) // If letter = h, return 1
		return 1;
	if(estado == 4 && letter == 'o') 	// If letter = h, return 1
		return 1;

	return 0;							//If letter is different of all the characters thar we compare
}										//The state will be the same until find a letter who fit in the conditions


int main(){

	int ans = 0;		//Declaration of all the variables that we'll use.
	string text;		//int called ans, will be the answer. String called text, will be the string that
						//we are going to analyze

	cin >> text;		//Here, the user type the input.

	for(int i = 0; i < text.size(); i++){	//Thie loop is for check if the letters that we need are in the correct 
		if(checkans(text[i],ans) == 1){		//order. We do that, with a function called checkans. Who recieves
			ans += 1;						//the current character and ans, who takes part as a state.
		}									//If meets the conditions of the function, the ans will increase in 1.
	}

	if(ans == 5){							//If at the end of the loop, ans == 5. Print YES, because the string "hello"
		cout << "YES" << endl;				//could be built it.
	} else {
		cout << "NO" << endl;				//If at the end of the loop ans != 5, Print NO, beacause the string "hello"
	}										//couldn't be built it.
	return 0; 
}