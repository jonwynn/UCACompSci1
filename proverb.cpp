#include <iostream>
#include <string>

using namespace std;
// Lab 6.2
// 
// Jonathan Wynn

//Exercise 1: If you enter in -3.97, the program still executes properly due to the else statement inside of the writeProverb function 
//catching any numbers that are not 1 and then printing "Now is the time for all good men to come to the aid of their country."



void writeProverb(string code)
{
    code = wordCode;
    cout << "Now is the time for all good men to come to the aid of their " << code << "." << endl;
    


int main()
{
    int wordCode;
    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ____" << endl;
    cout << "Please input the word that you would like to finish the proverb." << endl;
    cin >> wordCode;
    writeProverb(wordCode);
}

// *********************************************************************
// writeProverb
//
// task: This function prints a proverb. The function takes a number
// from the call. If that number is a 1 it prints "Now is the time
// for all good men to come to the aid of their party."
// Otherwise, it prints "Now is the time for all good men to come to the
// aid of their country."
// ********************************************************************

