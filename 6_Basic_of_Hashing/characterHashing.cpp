#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    // Precompute for lowerCase
    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i] - 'a']++;
    // }

    // Precompute for every character
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // For lowercase
        // cout << hash[c - 'a'] << endl;
        // For EveryCharacer
        cout << hash[c] << endl;
    }
    return 0;
}