#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        long long int d = min(x, y);
        long long int minsteps = d + (max(x, y) - d);
        long long int ans = minsteps;
        // if(x%2==y%2)
        // {
        //     ans--;
        //     cout<<ans<<endl;
        //     continue;
        // }
        if (max(x, y) > k)
        {
            cout << -1 << endl;
        }
        else
        {
            long long int rem = k - d;
            if (x == y)
            {
                if (rem % 2 == 0)
                {
                    cout << k;
                }
                else
                {
                    cout << k - 2;
                }
            }
            else
            {
                cout << d + (rem / 2) * 2;
            }
        }
        cout << "\n";
    }
    return 0;
}