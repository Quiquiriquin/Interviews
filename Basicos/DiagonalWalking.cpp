//Link http://codeforces.com/contest/954/problem/A

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;



int main(){

	int size,ans;		//Declaration of all the variables that we will use
	char moves,bef;		//int size to size of the string. int ans to answer of the problem.
						//char moves referring to leters 'U' o 'R'. char bef to help us in the comparation.
	cin >> size;		//The user insert the size of the string
	ans = size;			//Here assing to ans the value of size. Just to reduce it in the iterations.

	for(int i = 0; i < size; i++){	//Loop fot check the characters
		
		cin >> moves;				//Input of the characters
		
		if((moves == 'R' && bef == 'U') || (moves == 'U' && bef == 'R')){		//If the character was an 'R' & bef = 'u' 
			ans += -1;															//or 'U' & bef = 'R'.
			bef = 'D';								//With this conditions, we check if the secuence are UR o UR. If it's one
		} else {									//of them, we change bef to 'D'. This change it's to avoid a repeated case
													//Then minus ans by 1. 
			bef = moves;							//If doen't meets the conditions, we assing the value of moves to bef
		}
	}	

	cout << ans << endl;			//Line to print the answer.
	
	return 0; 
}