#include <bits/stdc++.h>
using namespace std;

// Finding Numbers of time every elmenet ouccrs in array using Hashing

int maxArrayElement(int n, int arr[])
{
    int max = 0;
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
    cout << "Enter size of array!";
    cin >> n;

    cout << "Enter Array Elements.";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute
    // First find Max Element in Array
    int maxELement = maxArrayElement(n, arr);

    // Create A Hash using this Max Element of Array
    // Create Hash of Max+1 Size
    int hash[maxELement + 1] = {0}; // we can only create array of 10^6 size inside main function , globally it can be 10^7 size approx
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    // Fetching of Queries
    cout << "Enter numbers of Queries you want to Find";
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;

        // Fetching Done

        if (num >= maxELement + 1)
        {
            cout << 0 << endl;
        }
        else
        {

            cout << hash[num] << endl;
        }
    }

    return 0;
}