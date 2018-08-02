#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    float tip_percent;
    cin >> tip_percent;
    float tax_percent;
    cin >> tax_percent;
    float total;
    tip_percent = (meal_cost*tip_percent)/100;
    tax_percent = (meal_cost*tax_percent)/100;
    total = meal_cost + tip_percent + tax_percent;
    total = round(total);
    cout << "The total meal cost is " << total << " dollars" << endl;
    
    return 0;
}