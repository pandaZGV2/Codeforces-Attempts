#include <bits/stdc++.h>
using namespace std;
unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        int n;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            n = i;
            vector<int> c(10, 0);
            while (n > 0)
            {
                c[n % 10]++;
                n = n / 10;
            }
            if (accumulate(c.begin()+1,c.end(),0)>3)
                continue;
            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}