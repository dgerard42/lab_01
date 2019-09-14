#include <string>
#include <iostream>

using namespace std;

const int COINS = 4;

void     make_change(int change)
{
    int     num_of_coins;
    string  coin_names[COINS] = {"quater", "dime", "nickel", "penny"};
    int     coin_amounts[COINS] = { 25, 10, 5, 1};

    for (int i = 0; i < COINS; i++)
    {
        num_of_coins = change / coin_amounts[i];
        change %= coin_amounts[i];
        cout << num_of_coins << " " << coin_names[i];
        if (num_of_coins > 1)
            cout << "s";
        cout << endl;
    }
}

int     dollars(int money)
{
    cout << money / 100 << " dollars" << endl;
    money %= 100;
    return money;
}

int     main()
{
    int total;
    int payment;
    int change;
            
    cout << "it's time for some change around here (⌐ ͡■ ͜ʖ ͡■)" << endl;
    cout << "enter the total, no decimals:" << endl;
    cin >> total;
    cout << "enter the amount the customer has paid, no decimals:" << endl;
    cin >> payment;
    if (total > 0 && payment >= total)
    {
        change = payment - total;
        cout << "you owe the customer:" << endl;
        change = dollars(change);
        make_change(change);
    }
    else
    {
        cout << "you entered invalid input. make sure that your payment";
        cout << " is more than or equal to your total. make sure that";
        cout << " your total is greater than zero, and no decimals." << endl;
    }
    return 0;
}

// future improvements vv
// smaller main?
// take in float input and convert to int for maths
