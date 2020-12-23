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
        ll n;
        cin >> n;
        // int k = 0;
        vector<long long> v;
        while (n > 0)
        {
            ll i;
            for (i = 2; i < n / 2; i++)
            {
                if (n % i == 0)
                {
                    v.push_back(i);
                    n = n / i;
                    break;
                }
            }
            if (v.size()!=0 || v.back() != i)
            {
                v.push_back(n);
                break;
            }
        }
        cout << v.size() << endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}