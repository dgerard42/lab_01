#include <iostream>
#include <string>

using namespace std;

int         dumb_multiplication(int num_1, int num_2)
{
    int result = 0;
    
    if ((num_1 < 0 && num_2 >= 0) || (num_1 < 0 && num_2 < 0))
    {
        num_1 = -num_1;
        num_2 = -num_2;
    }
    while (num_1 > 0)
    {
        result += num_2;
        num_1--;
    }
    return result;
}


int         main()
{
    int num_1;
    int num_2;

    cout << "welcome to >>>THE MULTIPLIER!!!<<< ╚═| ~ ಠ ₒ ಠ ~ |═╝" << endl
        << "enter two numbers to multiply with each other:" << endl;
    cin >> num_1 >> num_2;
    cout << num_1 << " * " << num_2 << " = " << dumb_multiplication(num_1, num_2)
        << endl;
    return 0;
}
