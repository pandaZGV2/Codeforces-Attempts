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
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd((b%a+a)%a, a);
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
        int dmax = 1;

        if (m != 0)
        {
            dmax=1;
            for (int r = 0; r < min; r++)
            {
                int g = v[0] - r;
                for (int i = 1; i < v.size(); i++)
                {
                    g = gcd(v[i] - r, g);
                }
                if (g > dmax)
                    dmax = g;
                    cout<<dmax<<endl;
            }
            cout << dmax << endl;
        }

    } while (m != 0);

    return 0;
}