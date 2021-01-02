#include <bits/stdc++.h>

using namespace std;

// typedef long long ll;
// typedef unsigned long long int ull;
// typedef long int li;
typedef vector<int> vi;
// typedef pair<int, int> pi;

// // #define f first
// // #define s second
#define pb push_back
// #define mp make_pair
// #define modint int(1e9 + 7)
// #define mod 1e9 + 7
// #define loop(n) for (int i = 0; i < n; i++)
// #define rep(i, a, n) for (int i = a; i < n; i++)
// #define file_read                     \
//     freopen("input.txt", "r", stdin); \
//     freopen("output.txt", "w", stdout);
// #define tc    \
//     int t;    \
//     cin >> t; \
//     while (t--)
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vi a, b;
        int c, s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a.pb(c);
            s1 += c;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            b.pb(c);
            s2 += c;
        }
        // if (s1 > s2)
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        int swap = 0;
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl; De-bugger off
        int f=min(n,m);
        for (int i = 0; i < f; i++)
        {
            if (s1 > s2)
                break;
            s1 = s1 - a[i] + b[m-i-1];
            s2 = s2 - b[m-i-1] + a[i];
            swap++;
        }
        if (s1 > s2)
        {
            cout << swap << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}