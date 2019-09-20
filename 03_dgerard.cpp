#include <iostream>
#include <string>

using namespace std;

string  turnLeft(string karelFacing)
{
    if (karelFacing == "east")
        return "north";
    else if (karelFacing == "north")
        return "west";
    else if (karelFacing == "west")
        return "south";
    else if (karelFacing == "south")
        return "east";
    return "error";
}

void    displayMap(int karelRow, int karelColumn, string karelFacing)
{
    cout << ">>Karel is at x=" << karelColumn << " y=" << karelRow;
    cout << " and they are facing " << karelFacing << "." << endl;
    return;
}

int     main()
{
    int     karelRow = 0;
    int     karelColumn = 0;
    string  karelFacing = "east";
    string  input = "startup";

    cout << ">>Hello, I am Karel v 0.1. Please enter a command: move();,";
    cout << " turnLeft();, or quit" << endl; 
    while (karelFacing != "quit")
    {
        cin >> input;
        if (input == "move();")
        {
            if (karelFacing == "east")
                karelColumn++;
            else if (karelFacing == "west")
                karelColumn--;
            else if (karelFacing == "north")
                karelRow++;
            else if (karelFacing == "south")
                karelRow--;
            if (karelRow > 7 || karelRow < 0 || karelColumn > 7 || karelRow < 0)
            {
                cout << ">>ouch. I have crashed. shutting down" << endl;
                break;
            }
        } 
        else if (input == "turnLeft();")
            karelFacing = turnLeft(karelFacing);
        else if (input == "quit")
        {
            cout << ">>goodbye friend" << endl;
            break;
        }
        else
        {
            cout << ">>Please enter one of the valid commands, which are as";
            cout << " follows: move();, turnLeft();, quit" << endl;
        }
        displayMap(karelRow, karelColumn, karelFacing);
    }
    return 0;
}
