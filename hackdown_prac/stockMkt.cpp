#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin >> n>>t;
    unsigned long array[n] = {0};
    // unsigned long ts[t];
    for (int i = 0; i < t; i++)
    {
        int a,b,q;
        cin >> a >> b >>q;
        for (int j = a-1; j < b; j++)
        {
            array[j]+=q;
        }
        
    }
    int q,count;
    count=0;
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        if(array[i] < q)
            count++;
    }
    
    cout << count;
    



}