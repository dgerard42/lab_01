#include <iostream>
#include <string>

using namespace std;

const int TAX_BRACKETS = 6;

int         get_income()
{
    int income;

    cout << "welcome to *.*.TAX CALCULATOR.*.* ╰( ͡° ͜ʖ ͡° )つ──☆*:・ﾟ"
        << endl << " please enter your yearly income without decimals"
        << endl;
    cin << income;
    if ( income < 0)
    {
        cout << "you have entered invalid input. please try again."
            << " exiting program now" << endl;
    } 
    return income;
}

int         calc_deductions(int income)
{
    int deductions = 0;
    int remaining_income = income;
    int rates[TAX_BRACKETS] = {0, 10, 20, 30, 40};
    int ranges[TAX_BRACKETS] = {3000000, 5000000, 10000000, 20000000, 25000000};
    
    for (int i = 0; i < TAX_BRACKETS; i++)
    {
        if (income - ranges[i] >= 0)
        {
            deductions += ((ranges[i] / 100) * rates[i]);
            remaining_income -= ranges[i];
        }
        else
        {
            deductions += ((remaining_income / 100) * rates[i]);
            break;
        }
    } 
    return deductions;
}

void        display_results(int income, int deductions)
{
    cout << your 
}

void        print_moneys(int money)
{
    float con_centavos = 
}

int         main()
{
    int income;
    int deductions;

    income = get_income();
    deductions = calc_deductions(income);
    display_results(income, deductions);
    return 0;
}
