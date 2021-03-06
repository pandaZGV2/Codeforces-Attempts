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
int euclidean_remainder(int a, int b)
{
    assert(b != 0);
    int r = a % b;
    return r >= 0 ? r : r + std::abs(b);
}
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd((b % a + a) % a, a);
}
int main(void)
{
    iamspeed;
    int m;
    do
    {
        vi v;
        int min = INT_MAX;
        int c;
        cin >> c;
        m = c;
        while (c != 0)
        {
            v.pb(c);
            if (min > c)
                min = c;
            cin >> c;
        }

        if (m != 0)
        {
            ll g=0;
            for (int i = 0; i < v.size(); i++)
            {
                    g = gcd(v[i] - min, g);//Taking minimum to maximize d, if n1=q1d+r.n2=q2d+r,...., then d is the gcd of n2-n1,n3-n1 and so on.
            }
            cout<<g<<endl;
        }

    } while (m != 0);

    return 0;
}