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

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    // int sLargest = -1; // in case of array does not containing minus values
    int sLargest = INT_MIN; // in case of array containing minus values

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

bool isArraySorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int removeDuplicatesFromSortedArray(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    // int ans = maxELement(arr, n);
    // int ans = secondLargest(arr, n);
    // int ans = secondSmallest(arr, n);
    // int ans = isArraySorted(arr, n);
    int ans = removeDuplicatesFromSortedArray(arr, n);
    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Answer is " << ans;
    return 0;
}