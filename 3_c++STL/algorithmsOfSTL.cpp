#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // they are same

    if (p1.first > p2.first)
        return true;
    return false;
}

void algorithms()
{
    // Assume that a and v is vector or array in below code or let us define both here!
    int n = 5;
    // int a[n] = {1, 3, 5, 1, 3};
    // vector<int> v = {62, 94, 14, 41, 22};

    // Normal Sorting starting from ending
    // sort(a, a + n);

    // sort(v.begin(), v.end());

    // perticularly sorting between 2 indexes
    // sort(a + 1, a + 4);

    // Sorting in Descending order

    // sort(a, a + n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // This is  MyWay Sorting
    //  sort it according to second element
    //  if second element is same, then sort
    //  it according to first element but in descending order

    // then use comparator
    sort(a, a + n, comp);

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].first << " " << a[i].second;
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    cout << endl;

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 123218329738472624;
    int cnt1 = __builtin_popcountll();

    string s = "123";

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
    // similiarly there is min element

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
}

int main()
{
    algorithms();
    return 0;
}