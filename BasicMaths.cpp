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
    int cnt = (int)(log10(n) + 1);  // O(logn)
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
    // O(n)

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

    // O(n)
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

    // O(n)
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

    // O(n)
}

int sumOfAllDivisors(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i * (x / i);
    }
    return sum;
    // O(n)
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

    // O(sqrt(n))
}

bool checkPrime(int x)
{
    // prime numbers basically numbers which got only 2 factors one and itself
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
        return true;
    }
    // O(sqrt(n))
}

vector<int> GCDHCF(int a, int b)
{
    vector<int> ans;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans.push_back(i);
        }
    }

    // another loop

    // for (int i = min(a,b); i <= 1; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         ans.push_back(i);
    //     }
    // }

    return ans;

    // O(min(a,b))
}

int euclidenAlgoGCD(int a, int b)
{

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
    // O(log(min(a,b)))
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

    // cout << sumOfAllDivisors(4) << endl;
    // printAllDivisors(36);
    // cout << checkPrime(37) << endl;
    // cout << checkPrime(37) << endl;
    // cout << checkPrime(37) << endl;

    // vector<int> ans = GCDHCF(12, 16);
    // for (auto it : ans)
    //     cout << it << " ";

    cout << euclidenAlgoGCD(12, 16) << endl;

    return 0;
}