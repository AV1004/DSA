#include <bits/stdc++.h>
using namespace std;

vector<int> TwoSumArrayProblem(vector<int> &a, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < a.size(); i++)
    {
        int currentElement = a[i];
        int requiredElement = target - currentElement;
        if (mpp.find(requiredElement) != mpp.end())
        {
            return {mpp[requiredElement], i};
        }
        mpp[currentElement] = i;
    }
    return {-1, -1};
}

string TwoSumArrayProblemInBoolean(vector<int> &a, int target)
{
    int left = 0, right = a.size() - 1;
    sort(a.begin(), a.end());
    while (left < right)
    {
        int sum = a[left] + a[right];
        if (sum == target)
        {
            return "Yes";
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "No";
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int inputNo;
        cin >> inputNo;
        arr.push_back(inputNo);
    }

    // vector<int> ans = TwoSumArrayProblem(arr, 14);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    string index = TwoSumArrayProblemInBoolean(arr, 14);
    cout << "Answer is " << index;

    return 0;
}