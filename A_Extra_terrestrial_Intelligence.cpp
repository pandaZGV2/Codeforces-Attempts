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
    file_read
    int n;
    cin >> n;
    vi a;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c=='1')
        {
            a.pb(i);
        }
    }
    int d = a[1] - a[0];
    bool f = true;
    for (int i = 1; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] == d)
        {
            continue;
        }
        else
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}