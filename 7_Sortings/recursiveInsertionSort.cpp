#include <bits/stdc++.h>
using namespace std;

void recursive_Insertion_Sort(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;

        j--;
    }
    recursive_Insertion_Sort(arr, n, i + 1);
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
    recursive_Insertion_Sort(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}