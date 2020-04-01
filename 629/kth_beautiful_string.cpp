#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t f = 0; f < t; f++)
    {
        int n, k, i;
        cin >> n >> k;
        i = 1;
        int a = n - 1, b = n;
        // k=3 i=3  a=3 b=4 j=4
        while (i < k)
        {
           //eka langa nm a adu krnoo
            if (a == b - 1)
            { 
                i++;
                a--;
                b=n;
            }
            else
            {
                for (int j=0 ; j<(n-a-1); j++)
                {
                   
                    i++;
                    b--;
                    if (i>=k)
                    {
                        break;
                    }
                    
                }
            }
        }
        for (size_t l = 1; l < n+1; l++)
        {
            if ((l== a) || (l==b))
            {
                cout << "b";
            }else
            {
                cout << "a";
            }
            
            
        }
        cout << endl;
        
    }

    return 0;
}
