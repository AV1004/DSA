#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello User" << i << endl;
    }

    int i = 1;
    while (i <= 10)
    {
        cout << "Hello User" << i << endl;
        i++;
    }

    do
    {
        cout << "Hello User" << i << endl;
        i--;
    } while (i > 1);

    return 0;
}