#include <bits/stdc++.h>
using namespace std;

// Infinte Recursive Call / Stack Overflow / No base Condition
// void infiniteRecursiveCalls(int a)
// {
//     cout << a;
//     infiniteRecursiveCalls(a);
// }

// With Base Conditon // No Stack Overflow

// int cnt = 1;
// void recrusiveCall()
// {
//     if (cnt == 11)
//     {
//         return;
//     }
//     else
//     {
//         cout << cnt << endl;
//         cnt++;
//         recrusiveCall();
//     }
// }

// Print 1 To N Without Loop
// int cnt = 1;
// void printNos(int N)
// {
//     if (cnt > N)
//     {
//         return;
//     }
//     cout << cnt;
//     cnt++;
//     printNos(N);
// }

// Print your name N times using recursion
void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Hello World!" << endl;
    printName(i + 1, n);
}

// Print number 1 to n using recursion optimal solution
void printTillN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    printTillN(i + 1, n);
}

// Print from N to 1 Reverse order using recursive way
void printReverseTo1FromN(int n, int i)
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    printReverseTo1FromN(n - 1, 1);
}

// Print 1 to N using backtracking
void oneToNUsingBackTrack(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    oneToNUsingBackTrack(i - 1, n);
    cout << i << endl;
}

// Print N to 1 using backtracking
void NtoOneUsingBacktracking(int i, int n)
{
    if (i > n)
    {
        return;
    }
    NtoOneUsingBacktracking(i + 1, n);
    cout << i << endl;
}

// Print Sum of first N Numbers using Recursion
// Parameterized method
int sumOfN(int n, int sum)
{
    if (n < 1)
    {
        return sum;
    }
    return sumOfN(n - 1, sum + n);
}
// Functional method
int sumOFN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOFN(n - 1);
}

int main()
{
    int n;
    cin >> n;
    // infiniteRecursiveCalls(n);
    // recrusiveCall();
    // printNos(n);
    // printName(1, n);
    // printTillN(1, n);
    // printReverseTo1FromN(n, 1);
    // oneToNUsingBackTrack(n, n);
    // NtoOneUsingBacktracking(1, n);
    // int ans = sumOfN(n, 0);
    int ans = sumOFN(n);
    cout << ans;
    return 0;
}