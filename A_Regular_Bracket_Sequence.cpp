#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

// #define f first
// #define s second
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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        bool f = true;
        int s1 = 0, s2 = 0, s3 = 0;
        cin >> s;
        if (s.size() % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        if ((s[0] != ')' && s[s.size() - 1] != '('))
        {
            f = true;
        }
        else
        {
            f = false;
        }
        (f) ? cout << "YES" << endl : cout << "NO\n";
    }

    return 0;
}