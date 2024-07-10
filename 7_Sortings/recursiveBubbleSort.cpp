#include <bits/stdc++.h>
using namespace std;

void recursive_Bubble_Sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int maxIndex, max = 0;

    for (int i = low; i <= high; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    int temp = arr[high];
    arr[high] = arr[maxIndex];
    arr[maxIndex] = temp;
    recursive_Bubble_Sort(arr, low, high - 1);
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
    recursive_Bubble_Sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}