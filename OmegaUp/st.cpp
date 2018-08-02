#include <iostream>
#include <vector>

using namespace std;

int main(){

    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int j;
    double k;
    string st;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> j >> k;
    cin.ignore();
    getline(cin,st);
    
    // Print the sum of both integer variables on a new line.
    j = j + i;
    cout << j << endl;
    // Print the sum of the double variables on a new line.
    d = d + k;
    cout << setprecision(2);
    cout << d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + st<< endl;


    return 0;

}