//Link of problem http://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

int esvocal(char);

int esvocal(char vowel){
	if(vowel == 'a')	//Function to compare the variable given in the first loop in main function
		return 1;		//If the variable vowel is equal to anyone of the characters that we have in this 
	if(vowel == 'e')	//function, return 1, else return 0
		return 1;
	if(vowel == 'i')
		return 1;
	if(vowel == 'o')
		return 1;
	if(vowel == 'u')
		return 1;
	if(vowel == 'y')
		return 1;

	return 0;
}

int main(){

	vector <char> ans; 	// Declaration of all the variables that I'm going to use
	string text;		// A vector called ans. Where I'll store the answers
	char aux;			// String called text. The text that I'll check;
						// Char called auc. It will be use to change the characters of the text tolower
	
	cin >> text;		// The user type the string.

	if(text.length() > 100){ //First condition of the problem. They guaranteed us that all the cases will
		return 0;			 // be less than 100 characters. If it's bigger, finish the problem.
	}

	for(int i = 0; i < text.length(); i++){ //Loop to check the string.

		aux = tolower(text[i]);				/*With this line, we guarantee that all the letters that we are going
											  to analyze will be smaller
											*/
		if(esvocal(aux)){					//At this point, we call teh function esvocal(aux). We give it the 	
		} else {							//variable aux to chech if is a vowel or 'y'. If it's equal as the 
			ans.push_back('.');				//characters that we have in our function, we skip the case. If it's
			ans.push_back(aux);				//different of those characters, push a '.' into ans following by
		}									//aux.
	}
	
	for(int i = 0; i < ans.size(); i++){	//This loop is for printing.
		cout << ans[i];
	}
	
	cout << endl;							//Print a endl.

	return 0;
}