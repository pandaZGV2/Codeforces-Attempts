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
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
bool cmp(const pair<int, pi> &rhs, const pair<int, pi> &lhs)
{
    if (rhs.s.f == lhs.s.f)
        return rhs.s.s < lhs.s.s;
    return rhs.s.f < lhs.s.f;
}
int linSearch(vector<pair<int, pi>> &a, int n, int y,int x)
{
    for (int i = 0; a[i].s.f<y and i < n; i++)
    {
        if (a[i].s.s < x)
        {
            return a[i].f + 1;
        }
    }
    return -1;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, pi>> a;
        vector<pair<int, pi>> b;
        vi ans(n);
        int fi, se;
        pair<int, pi> min={INT_MAX, {INT_MAX, INT_MAX}};
        for (int i = 0; i < n; i++)
        {
            cin >> fi >> se;
            if (se > fi)
            {
                a.pb({i, {se, fi}});
                continue;
            }
            a.pb({i, {fi, se}});
        }
        sort(a.begin(), a.end(), cmp);
        for(int i=0;i<n;i++)
        {
            if(a[i].s.f<min.s.f && a[i].s.s<min.s.s)
            {
                min={i, {a[i].s.f,a[i].s.s}};
            }
            b.pb(min);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            ans[a[i].f] = b[i].f;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}