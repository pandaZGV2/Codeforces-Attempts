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
        int n, m;
        cin >> n >> m;
        set<int> a, b;
        int c, s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a.insert(c);
            s1 += c;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            b.insert(c);
            s2 += c;
        }
        int swap = 0;
        int i = 0;
        set<int>::iterator ita=a.begin();
        set<int>::reverse_iterator itb=b.rbegin();
        while (s2 >= s1 && i<min(m,n))
        {
            if (*(itb) > *(ita))
            {
                s1 = s1 - *ita + *itb;
                s2 = s2 - *(itb--) + *(ita++);
                swap++;
            }
            i++;
        }
        if (s1 <= s2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << swap << endl;
        }
    }

    return 0;
}