#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        double a,b;
        cin >> a >> b ;
        int x = (int) (ceil(a/b));
        cout << ( (x*b)-a )<< endl;
    }
     
    return 0;
}
