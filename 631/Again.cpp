#include <iostream>
#include <sstream>
#include <bitset>
#include <string>
#include <string.h>

using namespace std;

int main()
{

    // while (i<strlen(s))
    // {
    //     // cout << (int)s[i] << endl;
    //    c+=(int)s[i];
    //     i++;
    // }
    while (1)
    {
        /* code */
        char *s = new char[10];
        cin >> s;
        int i = strlen(s) - 1;
        cout << (int)s[0] + (int)s[i] << endl;
    }
}