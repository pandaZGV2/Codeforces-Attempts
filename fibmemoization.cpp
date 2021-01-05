#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef map<ll, ll> mi;

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
vector<ll> v(1001, 0);
ll fibmemo(int n)
{
    if (v[n] != 0)
    {
        return v[n];
    }
    else if (n <= 2)
    {
        return 1;
    }
    else
    {
        return v[n] = fibmemo(n - 1) + fibmemo(n - 2);
    }
}
int main(void)
{
    iamspeed;
    int n;
    cin >> n;
    cout << fibmemo(n) << endl;

    return 0;
}