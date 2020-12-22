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
        /* code */
        int n, m;
        int c;
        cin >> n >> m;
        vi v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            v1.push_back(c);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            v2.push_back(c);
        }
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (binary_search(v2.begin(), v2.end(), v1[i]))
            {
                s++;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}