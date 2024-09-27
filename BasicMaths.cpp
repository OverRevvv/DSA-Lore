#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <math.h>
using namespace std;

int extractionOfLastDigit(int n)
{
    if (n > 0)
    {
        int lastDigit = n % 10;
        // cout << lastDigit << endl;
        int rem = n / 10;
        extractionOfLastDigit(rem);
    }
    else
    {
        return 0;
    }

    /*
    int cnt = (int)(log10(n) + 1);  //BigO()logn
    return cnt
    */
}

int evenlyDivides(int N)
{
    int count = 0;
    if (N < 1)
        return 0;

    int temp = N;
    while (N > 0)
    {
        int value = N % 10;
        if (value != 0 && temp % value == 0)
        {
            count++;
            N /= 10;
        }
        return count;
    }

    // int cnt = 0;
    // int value = N;
    // while (N > 0)
    // {
    //     int digit = N % 10;
    //     if (digit != 0 && value % digit == 0)
    //         cnt++;
    //     N = N / 10;
    // }
    // return cnt;
}

int reverseInteger(int n)
{
    int rev = 0;   // Declaring an integer to hold the reversed integer
    while (n != 0) // Loop till n is not equal to 0 that works for both negative and positive integer
    {
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;               // check 32 bit range if r is outside the range then return 0
        int lastDigit = n % 10;     // last digit of the number
        n = n / 10;                 // removed the last digit from the number
        rev = rev * 10 + lastDigit; // storeed the last digit in reverse order
    }
    return rev; // returning the reversed integer
}

bool checkPalindromeNumber(int x)
{
    int reverse = 0;
    int temp = x;
    while (temp > 0)
    {
        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
            return 0;

        int lastDigit = temp % 10;
        temp = temp / 10;
        reverse = reverse * 10 + lastDigit;
    }
    if (reverse == x)
        return true;
    else
        return false;
}

bool checkArmstrongNumber(int x)
{
    int sum = 0;
    int temp = x;
    while (temp > 0)
    {
        if (sum > INT_MAX / 10 || sum < INT_MIN / 10)
            return 0;

        int ld = temp % 10;
        temp = temp / 10;
        sum = sum + (ld * ld * ld);
    }
    if (sum == x)
        return true;
    else
        return false;
}

int sumOfAllDivisors(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i * (x / i);
    }
    return sum;
}

void printAllDivisors(int x)
{
    vector<int> ls;

    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            if ((x / i) == i)
            {
                ls.push_back(i);
            }
            else
            {
                ls.push_back(i);
                ls.push_back(x / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

int main()
{
    // extractionOfLastDigit(7789);
    // find . -type f -name "*.exe" -exec rm {} \;
    // evenlyDivides(2446);

    // cout << reverseInteger(123) << endl;
    // cout << reverseInteger(-121) << endl;
    // cout << reverseInteger(120) << endl;

    // cout << checkPalindromeNumber(121) << endl;
    // cout << checkPalindromeNumber(-121) << endl;
    // cout << checkPalindromeNumber(120) << endl;

    // cout << checkArmstrongNumber(153) << endl;
    // cout << checkArmstrongNumber(35) << endl;
    // cout << checkArmstrongNumber(371) << endl;

    cout << sumOfAllDivisors(4) << endl;
    printAllDivisors(36);

    return 0;
}