#include <iostream>
#include <string>

using namespace std;

const int TAX_BRACKETS = 6;

void       print_moneys(int money)
{
    cout << (money / 100) << "." <<  (money % 100);
    return;
}

void        display_results(int income, int deductions)
{
    cout << "given that your income is ";
    print_moneys(income);
    cout << endl << "your deductions are ";
    print_moneys(deductions);
    cout << endl << "so your amount earned after deductions is ";
    print_moneys(income - deductions);
    cout << endl;
    return;
}

int         get_income()
{
    int income;

    cout << "welcome to *.*.TAX CALCULATOR.*.* ╰( ͡° ͜ʖ ͡° )つ──☆*:・ﾟ"
        << endl << " please enter your yearly income without decimals"
        << endl;
    cin >> income;
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
    
    for (int index = 0; index < TAX_BRACKETS; index++)
    {
        if (income - ranges[index] >= 0)
        {
            deductions += ((ranges[index] / 100) * rates[index]);
            remaining_income -= ranges[index];
        }
        else
        {
            deductions += ((remaining_income / 100) * rates[index]);
            break;
        }
    } 
    return deductions;
}


int         main()
{
    int income;
    int deductions;

    income = get_income();
    if (income >= 0)
    {
        deductions = calc_deductions(income);
        display_results(income, deductions);
    }
    return 0;
}
