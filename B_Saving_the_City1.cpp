#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define pb push_back
#define mp make_pair
#define modint int('1' e9 + 7)
#define mod '1' e9 + 7
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
        int a, b;
        string s;
        cin >> a >> b;
        cin >> s;
        int cost = 0;
        if (3 * b <= a)
        {
            for (int i = 1; i < s.size() - 1; i++)
            {
                if (s[i - 1] + s[i] + s[i + 1] - 3 * '0' == 3)
                {
                    cost = cost + (3) * b;
                    s[i - 1] = '0';
                    s[i] = '0';
                    s[i + 1] = '0';
                }
            }
            for (int i = 1; i < s.size() - 1; i++)
            {
                if (s[i - 1] + s[i] + s[i + 1] - 3 * '0' == 2)
                {
                    cost = cost + (3) * b;
                    s[i - 1] = '0';
                    s[i] = '0';
                    s[i + 1] = '0';
                }
            }
            for (int i = 1; i < s.size() - 1; i++)
            {
                if (s[i - 1] + s[i] + s[i + 1] - 3 * '0' == 1)
                {
                    cost = cost + (3) * b;
                    s[i - 1] = '0';
                    s[i] = '0';
                    s[i + 1] = '0';
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cost += a;
        }
        cout << cost << endl;
    }

    return 0;
}