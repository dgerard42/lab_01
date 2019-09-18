#include <iostream>
#include <string>

using namespace std;

int         main()
{
    int number;

    cout << "enter a number to be reversed:" << endl;
    cin >> number;
    if (number < 0)
    {
        cout << "-";
        number = -number;
    }
    while (number != 0)
    {
        cout << number % 10;
        number /= 10;
    }
    cout << endl;
    return 0;
}
