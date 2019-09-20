#include <string>
#include <iostream>

using namespace std;

const int COINS = 4;

void     make_change(int change)
{
    int     num_of_coins;
    string  coin_names[COINS] = {"quater", "dime", "nickel", "penny"};
    int     coin_amounts[COINS] = { 25, 10, 5, 1};

    for (int index = 0; index < COINS; index++)
    {
        num_of_coins = change / coin_amounts[index]; 
        change %= coin_amounts[index];
        cout << num_of_coins << " " << coin_names[index];
        if (num_of_coins != 1)
            cout << "s";
        cout << endl;
    }
    return;
}

int     dollars(int money)
{
    cout << money / 100 << " dollars" << endl;
    money %= 100;
    return money;
}

int     calc_change()
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
        return change;
    }
    else
    {
        cout << "you entered invalid input. make sure that your payment";
        cout << " is more than or equal to your total. make sure that";
        cout << " your total is greater than zero, and no decimals." << endl;
        return -1;
    }
}

int     main()
{
    int change;
    
    change = calc_change();
    if (change >= 0)
    {
        cout << "you owe the customer:" << endl;
        change = dollars(change);
        make_change(change);
    }

    return 0;
}

