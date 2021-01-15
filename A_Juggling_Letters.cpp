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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[26]={0};
        string s;
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; s[j] != '\0'; j++)
            {
                a[s[j] - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % n != 0)
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}