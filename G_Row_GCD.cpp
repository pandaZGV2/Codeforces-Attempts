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
// ull gcd(ull a, ull b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
int main(void)
{
    iamspeed;
    int n;
    int m;
    cin >> n >> m;
    ll b;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int g=abs(a[1]-a[0]);
    ll g=0;
    ll x;
    ll init;
    cin>>init;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        g=__gcd(abs(x-init),g);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b;
        cout<<__gcd(init+b,g)<<" ";
    }

    return 0;
}