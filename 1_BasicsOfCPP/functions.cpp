#include <bits/stdc++.h>
using namespace std;

// -> Void , non parameterized
void printHelloWorld()
{
    cout << "Hello World!" << "\n";
}

//-> void , Parameterized
void printName(string name)
{
    cout << name << "\n";
}

//-> return
int add(int a, int b)
{
    return a + b;
}

// Pass By Value
// void doSomething(int a, int b)
// {
//     a = a * b;
//     b = a / b;
//     a = a / b;
//     cout << "In function " << a << " " << b << endl;
// }

// Pass By Reference
void doSomething(int &a, int &b)
{
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "In function " << a << " " << b << endl;
}

void arraySomething(int arr[])
{
    arr[3] + 10;
    cout << "Array's 3rd element in UD function " << arr[2] << endl;
}

int main()
{

    // printHelloWorld();
    // printName("Valay");
    // int n1, n2;
    // cin >> n1 >> n2;
    // int a = add(n1, n2);
    // cout << a << "\n";

    // // Inbuilt function
    // int max = max(n1, n2);
    // cout << "Maxium is " << max << "\n";

    int a = 10, b = 20;
    // Pass by value and pass by reference
    doSomething(a, b);
    cout << "In main function " << a << " " << b << endl;

    // Note that array will be
    int arr[5];
    arr[2] = 2;
    arraySomething(arr);
    cout << "Array's 3rd element in main " << arr[2];
    return 0;
}
