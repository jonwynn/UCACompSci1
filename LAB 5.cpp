//Jonathan Wynn
//10.4.23
//LAB 5
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

/* Lab 5.1 Exercises 1-6 Working with a while Loop */
void part1()
{
    char letter = 'a';  

    while (letter != 'x')
    {
        cout << "Please enter a letter" << endl;
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;
    }

    return 0;
}

/* Lab 5.2 Exercises 1-3 Working with a do-while Loop */
void part2()
{
    // Fill in the code to define and initialize to 1 the variable month 
    float total = 0, rain; 

    int month = 1;

    cout << "Enter the total rainfall for month " << month << endl; 
    cout << "Enter -1 when you are finished" << endl; 
    // Fill in the code to read in the value for rain   
    cin >> rain;

    // Fill in the code to start a while loop that iterates 
    // while rain does not equal -1
    while 
    {
    // Fill in the code to update total by adding it to rain 
    // Fill in the code to increment month by one   
    
    cout << "Enter the total rainfall in inches for month " << month << endl; 
    cout << "Enter -1 when you are finished" << endl; 
    // Fill in the code to read in the value for rain  

    }   
    if (month == 1)
    {
        cout << "No data has been entered" << endl;
    }

    else
    {
        cout << "The total rainfall for the " << month - 1
            << " months is " << total << " inches." << endl;
    }
    return 0;
}

/* Lab 5.3 Exercises 1-3 Working with a for Loop */
void part3()
{
    const int NUMBEROFTESTS = 5;        
    int score;                          //the individual score read in 
    float total = 0.0;                  //the total of the scores
    float average;                      //the average of the scores
    int test = 1;                       // counter that controls the loop

    while (test <= NUMBEROFTESTS)       // note that the test is 1 the first time
    {                                   //the expression is tested

        cout << "Enter your score of test " << test << ": " << endl;
        cin >> score;

        total = total + score;
        test++;
    }

    average = total / NUMBEROFTESTS;
    cout << "Your average based on " << NUMBEROFTESTS
         << " test scores is " << average << endl;
    return 0;
}

/* Lab 5.4 Exercises 1-3 Nested Loops */
void part4()
{
    int score; 
    float total = 0.0;
    float average;
    int test = 1;

    cout << "Enter you score on test " << test
        << " (or -1 to exit): " << endl;
    cin >> score;

    while (score != -1)
    {
        total = total + score;
        test++;

        cout << "Enter your score on test " << test
             << " (or -1 to exit): " << endl;
        cin >> score;
    }
    if (test > 1)
    {
        average = total / (test - 1);

        cout << "Your average based on " << (test - 1)
             << " test scores is " << average << endl;
    }
    return 0;
}

/* Lab 5.5 Reading and Writing to a File
 */
void part5()
{
    // Copy over the code from the manual here
}

/* Lab 5.5 Choose any of the options
 */
void part6()
{
    // Copy over the code from the manual here
}

// Driver function for lab 4 - no need to do anything below this
int main()
{
    int choice;
    cout << "Lab 5 - Press (1-5) to run the desired exercise:" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        part1();
        break;
    case 2:
        part2();
        break;
    case 3:
        part3();
        break;
    case 4:
        part4();
        break;
    case 5:
        part5();
        break;
    case 6:
        part6();
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}