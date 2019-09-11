#include <string>
#include <iostream>

using namespace std;

int     main()
{
    int total;
    int payment;
    int change;
            
    cout << "it's time for some change around here (⌐ ͡■ ͜ʖ ͡■)" << endl;
    cout << "enter the total:" << endl;
    cin >> total;
    cout << "enter the amount the customer has paid" << endl;
    cin >> payment;
    if (total > 0 && payment >= total)
    {
        
    }
    else
    {
        cout << "you entered invalid input. make sure that your payment";
        cout << " is more than or equal to your total. make sure that";
        cout << " your total is greater than zero" << endl;
    }
}
