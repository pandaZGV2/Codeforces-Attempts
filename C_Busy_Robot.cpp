#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
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
    //iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> p;
        int s = 0;
        int t, x, x1 = 0, t1 = 0,prev=0;
        bool f1, f2;
        for (int i = 0; i < n; i++)
        {
            cin >> t >> x;
            prev=x1;
            if (t1 <= t)
            {
                t1 += t - t1 + abs(x - x1);
                x1 += x;
                p.push_back(make_pair(t, x));
            }
            if(x<=x1 && x>=prev)
            {
                s++;
            }
        }
        cout << s << endl;
    }
}