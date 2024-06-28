#include <bits/stdc++.h>
using namespace std;

// this function extracts all of the digits from any number  and then print them
void extractionOfDigitFromNumbers(int n)
{
    int N = n;
    vector<int> vec;
    while (N > 0)
    {
        vec.emplace_back(N % 10);
        N = N / 10;
    }

    for (auto it = vec.end() - 1; it >= vec.begin(); it--)
    {
        cout << *(it) << " ";
    }

    // Reverse Order
    cout << endl;
    for (auto it : vec)
    {
        cout << it << " ";
    }
}
// Problem Statement: Return the total number of digits in given number
int giveDigits(int n)
{
    int count = 0;
    for (int N = n; N > 0; N = N / 10)
    {
        count++;
    }
    return count;
}

// Problem Statement: Reverse a number
void reverseNumber(int n)
{
    int N = n;
    vector<int> vec;
    while (N > 0)
    {
        vec.emplace_back(N % 10);
        N = N / 10;
    }
    // Reverse Order
    for (auto it : vec)
    {
        cout << it;
    }
}

// Leetcode revese number
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0. Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
bool willMultiplicationOverflow(signed int a, signed int b)
{
    if (a == 0 || b == 0)
    {
        return false; // Multiplication with zero never
                      // overflows
    }
    return a > numeric_limits<signed int>::max() / b;
}

int reverse(int x)
{
    long reverseNum = 0;
    int n = abs(x);
    bool overflow = false;
    for (n; n > 0; n = n / 10)
    {
        int mod = n % 10;
        overflow = willMultiplicationOverflow(reverseNum, 10);
        if (overflow == true)
        {
            break;
        }
        reverseNum = (reverseNum * 10) + mod;
    }
    if (overflow == true)
    {
        return 0;
    }
    if (x < 0)
    {
        reverseNum = -reverseNum;
    }
    return reverseNum;
}

bool checkPalindrom(int x)
{
    int n = x;
    int reverseNum = 0;
    for (n; n > 0; n = n / 10)
    {
        int mod = n % 10;
        reverseNum = (reverseNum * 10) + mod;
    }
    if (reverseNum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkArmstrongNumber(int x)
{
    int n = x;
    int sum = 0;
    for (n; n > 0; n = n / 10)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
    }
    if (sum == x)
    {

        return true;
    }
    else
    {
        return false;
    }
}

// The time complexity of this is O(n)
void printAllDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// THe time complexity of this is O(sqrt(n))
void printAllDivisorsWithLessTC(int n)
{

    vector<int> divisors;

    // for (int i = 1; i <= sqrt(n); i++)
    for (int i = 1; i * i <= n; i++) // you can also use this instead of sqrt function
    {
        if (n % i == 0)
        {
            divisors.emplace_back(i);
            if ((n / i) != i)
            {
                divisors.emplace_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (auto it : divisors)
    {
        cout << it << " ";
    }
}

// GFG Problem
long long sumOfDivisors(int N)
{
    int sum = 0;
    long long finalSum = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
                if ((i / j) != j)
                {
                    sum = sum + (i / j);
                }
            }
        }
        // SOD.emplace_back(sum);
        finalSum = finalSum + sum;
        sum = 0;
    }

    cout << finalSum;
    return finalSum;
}

long long sumOfDivisorsWithLessTC(int N)
{
    long long finalSum = 0;
    for (int i = 1; i <= N; i++)
    {
        finalSum += i * (N / i);
    }
    return finalSum;
}

int checkForPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    return count;
}

int giveGCDorHCF(int n1, int n2)
{
    for (int n = min(n1, n2); n >= 1; n--)
    {
        if (n1 % n == 0 && n2 % n == 0)
        {
            return n;
        }
    }
    return -1;
}

int giveGCDorHCFUsingEA(int n1, int n2)
{
    int a = n1, b = n2;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    long long n;
    cin >> n;
    // extractionOfDigitFromNumbers(n);
    // int digits_in_n = giveDigits(n);
    // cout << digits_in_n;
    // reverseNumber(n);
    // int ans = reverse(n);
    // cout << ans;

    // bool ans = checkPalindrom(n);
    // bool ans = checkArmstrongNumber(n);
    // if (ans == 1)
    //     cout << "true";
    // else
    //     cout << "false";

    // printAllDivisors(n);
    // printAllDivisorsWithLessTC(n);
    // sumOfDivisors(n);
    // int Ans = checkForPrime(n);
    // int Ans = giveGCDorHCFUsingEA(n, 12);

    return 0;
}
