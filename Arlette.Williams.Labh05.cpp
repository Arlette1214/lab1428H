//Arlette Williams

#include <iostream>
using namespace std;

int main()
{
    float cost, tip, total, percent;

    cout << "Enter the price of the meal" << endl;
    cin >> cost;

    cout << "How much would you like to tip? Enter 10 for 10%, etc. " << endl;
    cin >> tip;

    percent = tip/100.00;

    total = cost + cost*percent;

    cout << "You tipped " << tip << "% and the total amount due today is $" << total << endl;

    return 0;
}
