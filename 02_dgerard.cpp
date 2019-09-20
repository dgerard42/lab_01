#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int distance;
    int x1;
    int x2;
    int y1;
    int y2;

    cout << "this is a **distance calculator** for 2 points" << endl;
    cout << "enter the coordinates of point 1, x then y:" << endl;
    cin >> x1 >> y1;
    cout << "enter the coordinates of point 2, x then y:" << endl;
    cin >> x2 >> y2; 
    distance = sqrt((pow((x1 - x2), 2)) + pow((y1 - y2), 2));
    cout << "the distance between those 2 points is " << distance << endl;
    return 0;
}
