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
long long binpow(long long a, long long b, long long m)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2, m);
    ll t;
    if (b % 2)
    {
        t = (res * res * a);
        if (t > m)
        {
            cout << m;
            exit(0);
        }
        else
            return t;
    }
    else
    {
        t = (res * res);
        if (t > m)
        {
            cout << m;
            exit(0);
        }
        else
        {
            return t;
        }
    }
}
int main(void)
{
    iamspeed;
    ull n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << m % binpow(2, n,m);
    }
    else
    {
        cout << m;
    }

    return 0;
}