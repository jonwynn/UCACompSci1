// 9.1.23 Burger Bill in class assignment
// Jonathan Wynn, Mekhi Lawson, Christian Fulmer
// Jonathan Wynn - ...made several more edits after class on 9/1/2023
// 
//I used #include <iomanip> in order to limit the decimal places allowed in the calcuations section of the code below.

#include <iostream>
#include <string>
#include <iomanip> //i needed to import this library to utilize fixed and setprecision 
using namespace std;

int main()
{
    double price1, price2, price3, subtotal;    //declaring variables needed
    const double AR_TAX = 0.065;                //declaring tax constants
    const double FAULKNER_TAX = 0.005;          
    const double CONWAY_TAX = 0.0175;
    const double TIP15 = 0.15;                  //declaring tip amounts
    const double TIP20 = 0.20;
    const double TIP25 = 0.25;
    string item1 = "Burger";                    //declaring menu items
    string item2 = "Fries";
    string item3 = "Shake";
    price1 = 4.99;                              //declaring menu prices
    price2 = 3.69;
    price3 = 3.25;
    subtotal = price1 + price2 + price3;        //calculate subtotal before tax
    double withTaxTotal, withTip15, withTip20, withTip25; //declare more needed variables 

    withTaxTotal = subtotal + (subtotal * AR_TAX) + (subtotal * FAULKNER_TAX) + (subtotal * CONWAY_TAX); //calculates subtotal with tax
    withTip15 = withTaxTotal + (withTaxTotal * TIP15);    //calculates totals with tax AND tip included 
    withTip20 = withTaxTotal + (withTaxTotal * TIP20);
    withTip25 = withTaxTotal + (withTaxTotal * TIP25);

    cout << "On the menu, there are three items." << endl; //display menu neatly
    cout << "First is the " << item1 << " for a price of $" << price1 << "." << endl; 
    cout << "Next on the menu is the " << item2 << " for a price of $" << price2 << "." << endl;
    cout << "Finally on the menu is the " << item3 << " for a price of $" << price3 << "." << endl;

    //on the below cout line, I used the "fixed" format flag to limit the amount of decimals allowed for the variables in question. I then used "setprecision"
    //to limit the amount of decimals for the "fixed" format flag to 2 decimal places. (please note i just googled this so it may be the wrong way to do this)

    cout << fixed << setprecision(2) << "The total of the three items before tax is applied is $" << subtotal << "." << endl; //display calculations
    cout << "The total of the three items with tax applied is $" << withTaxTotal << "." << endl;
    cout << "The total if 15% tip is included is $" << withTip15 << "." << endl;
    cout << "The total if 20% tip is included is $" << withTip20 << "." << endl;
    cout << "The total if 25% tip is included is $" << withTip25 << "." << endl;
}
