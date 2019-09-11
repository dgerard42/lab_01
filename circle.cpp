#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int     circumference(int radius)
{
    int circumference;
    
    circumference = 2 * M_PI * radius; 
    return circumference;
}

int     area(int radius)
{
    int area;
    
    area = M_PI * pow(radius, 2);
    return area;
}

int     volume(int radius)
{
    int volume;
    
    volume = (4 * M_PI * pow(radius, 3)) / 3;
    return volume;
}

int     surface_area(int radius)
{
    int s_area;

    s_area = 4 * M_PI * pow(radius, 2);
    return s_area;
}

int     main()
{
    int radius = 0;

    cout << "welcome to the circle / sphere calculator ╰( ͡° ͜ʖ ͡° )つ──☆*:・ﾟ" << endl;
    cout << "enter a number to use as a radius:" << endl;
    cin >> radius;
    if (radius > 0)
    {
        cout << "if your radius is for a circle, here is some info about that circle." << endl;
        cout << "area: " << area(radius) << endl;
        cout << "circumference: " << circumference(radius) << endl;
        cout << "if your radius is for a sphere, here is some info about that sphere." << endl;
        cout << "surface area: " << surface_area(radius) << endl;
        cout << "volume: " << volume(radius) << endl;
    }
    else
    {
        cout << "you didn't enter a number that could be a radius." << endl;
        cout << "enter a positive non-zero number." << endl;
    }
    return 0;
}
