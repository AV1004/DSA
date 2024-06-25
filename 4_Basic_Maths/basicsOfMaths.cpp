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

int main()
{
    int n;
    cin >> n;
    // extractionOfDigitFromNumbers(n);
    // int digits_in_n = giveDigits(n);
    // cout << digits_in_n;
    // reverseNumber(n);
    // int ans = reverse(n);
    // cout << ans;
    cout << abs(n);
    return 0;
}
