#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int n;
        cin >> n;
        int c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a.push_back(c);
        }
        // sort(a.begin(), a.end());
        int s=0;
        for (int i = 0; i < n - 2; i++)
        {
            vector<int>::iterator it0 = a.begin() + i;
            vector<int>::iterator it1 = lower_bound(a.begin() + i, a.end(), (*it1) + 1);
            vector<int>::iterator it2 = lower_bound(a.begin() + i, a.end(), (*it1) + 2);
            if ((it2 - it1) <= 2)
            {
                // cout << 0 << endl;
            }
            else
            {
                // cout << fact(it2 - it1) / fact(3) << endl;
                s+=fact(it2 - it1) / fact(3);
            }
        }
        // c = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         for (int s = j + 1; s < n; s++)
        //         {
        //             if (((max(max(a[i], a[j]), a[s])) - min(min(a[i], a[j]), a[s])) <=2)
        //                 {
        //                     c++;
        //                 }
        //         }
        //     }
        // }
        // cout << c << endl;
    }
    return 0;
}