#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

// #define f first
// #define s second
// #define pb push_back
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
        int a, b;
        string s;
        cin >> a >> b;
        cin >> s;
        int pos1 = 0, pos2 = 0;
        int s1 = 0, s2 = 0;
        bool f1 = 0, f2 = 0, f3 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (!f1 && s[i] == '1')
            {
                pos1 = i;
                f1 = true;
            }
            if (!f2 && s[s.size() - i - 1] == '1')
            {
                pos2 = s.size() - i - 1;
                f2 = true;
            }
            //Check for the number of 1's
            if (s[i] == '1')
            {
                s1++;
            }
            //Check for contiguous 1's
            if (!f3 and s[i] == '1')
            {
                s2++;
                f3 = true;
            }
            else if (s[i] == '0')
            {
                f3 = false;
            }
        }
        cout << min((pos2 - pos1 + 1 - s1) * b + a, s2 * a) << endl;
    }
    return 0;
}