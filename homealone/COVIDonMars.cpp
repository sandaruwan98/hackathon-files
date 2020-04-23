#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    unsigned long long a = 2, b = 3;
    if (t == 0)
    {
        cout << 0;
    }
    else if (t == 1)
    {
        cout << 1;
    }
    else if (t == 2)
    {
        cout << 2;
    }
    else if (t == 3)
    {
        cout << 7;
    }
    else
    {

        for (size_t i = 0; i < t - 3; i++)
        {
            unsigned long long b1 = 3 * a;
            a = 2 * a + b;
            b = b1;
        }

        cout << 2 * a + b;
    }
    return 0;
}