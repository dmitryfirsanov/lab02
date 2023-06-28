#include <iostream>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n'
        << "A / B = " << a / b << '\n';

<<<<<<< HEAD
    a > b ? cout << a << '\n' : cout << b << '\n';
=======
    a < b ? cout << a << '\n' : cout << b << '\n';
>>>>>>> 779d8ed (code: add output min)
}