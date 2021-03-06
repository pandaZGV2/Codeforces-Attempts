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
#define Inf INFINITY
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
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main(void)
{
    iamspeed;
    tc
    {
        int n;
        cin >> n;
        vi a(n), b;
        vi mx(n);
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(a[i], m);
            mx[i] = m;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == mx[i])
            {
                for (int j = i; j < a.size() and a[j] != 0; j++)
                {
                    b.pb(a[j]);
                    a[j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

