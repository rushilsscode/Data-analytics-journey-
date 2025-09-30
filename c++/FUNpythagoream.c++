
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == (b * b + c * c))
    
        return true;
    else
    
        return false;
     
}

int32_t main()
{
    int x, y, z;
    cout << "enter three sides of triangle" << endl;

    cin >> x >> y >> z;
    if (check(x, y ,z) == true)
    { 
        cout << "pythagorean triplet" << endl;
    }
    else
    {
        cout << "not a pythagoream triplet" << endl;
    }

    return 0;
}