#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin >> t;
    int min = n;
    while (t--)
    {
        min = 1e9;
        int a[10];
        for (int i = 0; i < 10; i++)
        {
            a[i] = 0;
        }
        cin >> n;
        vector<int> v;
        int c;
        v.push_back(11);
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c != v.back())
            {
                v.push_back(c);
                a[c]++;
            }
            if (a[c] == 1)
                a[c]++;
        }
        v.erase(v.begin());
        a[v.front()]--;
        a[v.back()]--;
        if(v.size()==1)
        {
            cout<<0<<endl;
            continue;
        }
        for (int i = 0; i < 10; i++)
        {
            if (a[i] < min && a[i]!=0)
            {
                min = a[i];
            }
        }
        // for(auto &it: v)
        // cout<<it<<" ";
        // cout<<endl;
        // if (min > n)
        //     cout << 0 << endl;
        // else
            cout << min << endl;
    }

    return 0;
}