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
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
ll check(vector<char> u, vector<char> v)
{
    set<char> s(u.begin(), u.end());
    ll cnt = 0;
    for (auto i : v)
    {
        if (s.find(i) != s.end())
        {
            cnt++;
        }
    }
    return cnt;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        map<string, vector<char>> a;
        //vector<int> count(26, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s.size() > 0)
            {
                a[s.substr(1)].pb(s[0]);
                //count[s[0] - 'a']++;
            }
        }
        ll cnt = 0;
        for (auto i : a)
        {
            for (auto j : a)
            {
                if (i.first != j.first)
                {
                    ll cnt1 = check(i.second, j.second);
                    cnt += (i.second.size() - cnt1) * (j.second.size() - cnt1);
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}