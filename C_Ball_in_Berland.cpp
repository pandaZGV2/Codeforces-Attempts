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

#define endl "\n"
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
bool cmpfunc(pi &lhs, pi &rhs)
{
    return lhs.f < rhs.f;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<pair<int, int>> couple(n);
        vi a1(a + 1, 0), b1(b + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> couple[i].f;
            a1[couple[i].f - 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> couple[i].s;
            b1[couple[i].s - 1]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans + n + 1 - a1[couple[i].f - 1] - b1[couple[i].s - 1];
        }
        cout << ans / 2 << endl;
    }

    return 0;
}