#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p1 = {1, 3};

    cout << p1.first << " " << p1.second;

    cout << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};

    cout << p2.first << " " << p2.second.second << " " << p2.second.first;

    cout << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

void explainVector()
{

    // Declaration
    vector<int> v;

    // Insertion
    v.push_back(1);    // Slower
    v.emplace_back(2); // Faster

    // Vector of pairs
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // Can omit the curly braces!

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}

    vector<int> v2(5); // {0,0,0,0,0} or {garbage value ,gb,gb,gb,gb}

    vector<int> v3(5, 20); //{20,20,20,20,20}
    vector<int> v4(v3);    // Copies the content of v3 into v4 means now v4 is also eqaul to {20,20,20,20,20}

    // Accesing Elements
    vector<int> main = {10, 20, 30, 40, 50};

    // Direct Access
    cout << main[0] << " " << main.at(0);

    // Iterator

    vector<int>::iterator it = main.begin(); // First elemets memeory location

    cout << *(it) << endl;

    it++; // goes to next element's memory location

    cout << *(it) << endl;

    vector<int>::iterator it1 = main.end(); // Points to memeory cell after last element's memeory cell
    it1--;

    // vector<int>::iterator it1 = main.rend(); // Points to memory cell before first element's memory cell
    // it1--;                                    // gives first element

    // vector<int>::iterator it1 = main.rbegin(); // Reverse the vector and point's to last element as first elementt of reversed vector
    // it1++;                                    // gives second last element

    cout << *(it1) << endl; // Gives last element

    cout << v.back() << " " << endl; // Gives last element

    // Printing
    for (vector<int>::iterator it = main.begin(); it != main.end(); it++)
    {
        cout << *(it) << " ";
    }

    // auto will automatically takes data types according to data assigned to it!
    for (auto it = main.begin(); it != main.end(); it++)
    {
        cout << *(it) << " ";
    }

    // for each loop
    for (auto it : v)
    {
        cout << it << " ";
    }
}

int main()
{
    explainPair();
    explainVector();
    return 0;
}