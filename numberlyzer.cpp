// Jonathan Wynn
// 10.6.23
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int sum = 0;
int num = 0;

bool isEven(int num)
{
    bool result = false;
    result = num % 2;
    return result;
}

bool isTriangle(int num)
{
    if (num < 0)
        return false;

    int sum = 0;
    for (int n = 1; sum <= num; n++)
    {
        sum = sum + n;
        if (sum == num)
            return true;
    }
    return false;
}

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= num /2 ; i++)
    {
        if (num % i == 0)
            return false;
        return true;
    }
}

bool isSquare(int num)
{
    int square = sqrt(num);
    return (square * square == num);
}

bool isFib(int num)
{
    return isSquare(5 * num * num + 4) || isSquare(5 * num * num - 4);
}

bool isPerfect(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    if (sum == num && num != 1)
    {
        return true;
    }
    return false;
}



int main()
{
    cout << "This program determines if your input is an even number," << endl;
    cout << " prime number, triangle number, square number, fibbonacci number," << endl;
    cout << " or a perfect number." << endl;

    cout << "Please enter an integer, then press enter." << endl;
    cin >> num;
    cout << endl;

    if (isEven(num) == 1)
    {
        cout << num << " is not an even number." << endl;
    }
    else
        cout << num << " is an even number." << endl;
    
    if (isTriangle(num) == true)
    {
        cout << num << " is a triangle number." << endl;
    }
    else
        cout << num << " is not a triangle number." << endl;

    if (isPrime(num) == true)
    {
        cout << num << " is a prime number." << endl;
    }
    else
        cout << num << " is not a prime number." << endl;
    
    if (isSquare(num) == true)
    {
        cout << num << " is a perfect square." << endl;
    }
    else
        cout << num << " is not a perfect square." << endl;

    if (isFib(num) == true)
    {
        cout << num << " is a fibonnacci number." << endl;
    }
    else
        cout << num << " is not a fibonnacci number." << endl;
    if (isPerfect(num) == true)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
        cout << num << " is not a perfect number." << endl;
}


