#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr.emplace_back(i);
    }

    // PreCompute
    map<int, int> mpp;
    for (auto it : arr)
    {
        if (it > n)
        {
            continue;
        }
        mpp[it]++;
    }

    int p;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        // Fetching Part
        cout << mpp[i] << " ";
    }
    return 0;
}
