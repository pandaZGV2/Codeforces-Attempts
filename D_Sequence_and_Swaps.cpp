#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define modint int(1e9 + 7)
#define mod 1e9 + 7
#define loop(n) for (int i = 0; i < n; i++)
#define rep(i, a, n) for (int i = a; i < n; i++)
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    tc
    {
        int n, x;
        cin >> n >> x;
        vi v(n, 0);
        bool f = true;
        int n1 = 0, p1 = n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (n1 > v[i] && f == true)
            {
                p1 = i;
                f = false;
            }
            n1 = v[i];
        }
        if (p1 == n)
        {
            cout << 0 << endl;
            continue;
        }
        int s = 0;
        int t;
        for (int i = p1; i < n - 1; i++)
        {
            if (x < v[i + 1] && v[i] > v[i + 1])
            {
                t = x;
                x = v[i];
                v[i] = t;
                s++;
            }
            else
            {
                continue;
            }
        }
        f = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
            {
                continue;
            }
            else
            {
                f = true;
                break;
            }
        }
        if (f == true)
        {
            cout << -1;
        }
        else
        {
            cout << s;
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}