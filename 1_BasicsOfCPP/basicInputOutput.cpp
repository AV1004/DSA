// Skelton of C++
// #include <iostream>
// int main()
// {
//     std::cout << "Hello World!";
//     return 0;
// }

// For printing output in new line
// #include <iostream>
// int main()
// {
//     std::cout << "Hello World!" << "\n"
//               << "Hello India!";
//     // OR
//     std::cout << "\n";
//     std::cout
//         << "Hello World!" << std::endl
//         << "Hello India!";
//     return 0;
// }

// Taking Input
// #include <iostream>
// int main()
// {
//     int x;
//     std::cin >> x;
//     std::cout << "Value of x is " << x;
//     return 0;
// }

// // For Multiple Inputs
// #include <iostream>
// int main()
// {
//     int x, y;
//     std::cin >> x >> y;
//     std::cout << "Value of x is " << x << "\n"
//               << " and value of y is " << y;
//     return 0;
// }

// We can use one line include that can include all of the libraries of c++ which is mention here
#include <bits/stdc++.h>
// Now this below line code is use to omit the bothersome of writing std:: everytime using its function
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << "Value of x is " << x;
    return 0;
}