#include <bits/stdc++.h>
using namespace std;

int maxELement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = maxELement(arr, n);
    cout << "Answer is " << ans;
    return 0;
}