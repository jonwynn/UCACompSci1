// 9.1.23 Burger Bill in class assignment
// Jonathan Wynn, Mekhi Lawson, Christian Fulmer


#include <iostream>
#include <string>
using namespace std;

int main()
{
    double price1, price2, price3, subtotal;
    const double AR_TAX = 0.065;
    const double FAULKNER_TAX = 0.005;
    const double CONWAY_TAX = 0.0175;
    const double TIP15 = 0.15;
    const double TIP20 = 0.20;
    const double TIP25 = 0.25;
    string item1 = "Burger";
    string item2 = "Fries";
    string item3 = "Shake";

    price1 = 5.00;
    price2 = 3.50;
    price3 = 3.00;

    subtotal = price1 + price2 + price3;
    
    cout << "On the menu, there are three items. First is the " << item1 << " for a price of $" << price1 << ".\n";
    cout << "Next on the menu is the " << item2 << " for a price of $" << price2 << ".\n";
    cout << "Finally on the menu is the " << item3 << " for a price of $" << price3 << ".\n";

    cout << "The total of the three items is $" << subtotal << ".";
}
