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
// #define modint int(1e9 + 7)
// #define mod 1e9 + 7
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
    if (b % 2) //b&1==0
        return (res % m * res % m * a % m) % m;
    else //b&1==1
        return (res % m * res % m) % m;
}
ll binwhile(ll a, ll b, ll modint)
{
    a%=modint;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1 == 1)
        {
            res = (res * a)%modint;
        }
        a = (a * a)%modint;
        b >>= 1;
    }
    return res;
}
int main(void)
{
    iamspeed;
    int z;
    tc
    {
        ll x, y, m;
        cin >> x >> y >> m;
        cout << binwhile(x, y, m) << endl;
    }
    cin >> z;
    // cout<<binwhile(3,5)<<endl;
    return 0;
}