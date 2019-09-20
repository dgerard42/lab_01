#include <iostream>
#include <string>

using namespace std;

void    print_message(char grade)
{
    switch (grade)
    {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Very Good" << endl;
            break;
        case 'C':
            cout << "Good" << endl;
            break;
        case 'D':
        case 'F':
            cout << "Try Harder Next Time" << endl;
            break;
        default:
            cout << "Error. Invalid grade" << endl;
    }
    return;
}

char    determine_grade(int score)
{
    if (0 <= score && score < 60)
        return 'F';
    else if (60 <= score && score < 70)
        return 'D';
    else if (70 <= score && score < 80)
        return 'C';
    else if (80 <= score && score < 90)
        return 'B';
    else if (90 <= score)
        return 'A';
    return 'E';
}

int     get_score()
{
    int     score;
    bool    error = 1;

    cout << "enter a number grade between 0 & 100:" << endl;
    while (error == 1)
    {
        cin >> score;
        if (score >= 1 && score <= 100)
            error = 0;
        else
        {
            cout << "you entered invalid input. try again." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    return score;
}

int     main()
{
    char    grade;
    int     score;

    score = get_score();
    grade = determine_grade(score);
    print_message(grade);
    return 0;
}
