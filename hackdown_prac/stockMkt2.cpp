#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin >> n>>t;
    unsigned long array[n] = {0};
    // unsigned long ts[t];
    int a[t],b[t],q[t];
    for (int i = 0; i < t; i++)
    {
        
        cin >> a[i] >> b[i] >>q[i];
      
        
    }
    int k,count;
    count=n;
    cin >> k;
    for (int i = 0; i < t; i++)
    {
        for (int j = a[i]-1; j < b[i]; j++)
        {
            if (array[j] >= k)
                continue;
            array[j]+=q[i]; 
            if (array[j] >= k)
                count--;
            
        }
    }
    
    cout << count;
    
}