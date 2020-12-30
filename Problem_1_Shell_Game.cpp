#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
// #define s second
// #define pb push_back
#define mp make_pair
#define modint int(1e9 + 7)
#define mod 1e9 + 7
#define loop(n) for (int i = 0; i < n; i++)
#define rep(i, a, n) for (int i = a; i < n; i++)
#define file_read                    \
    freopen("shell.in", "r", stdin); \
    freopen("shell.out", "w", stdout);
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    file_read 
    int t;
    cin >> t;
    int a1[t][3];
    for (int i = 0; i < t; i++)
    {
        cin >> a1[i][0] >> a1[i][1] >> a1[i][2];
    }
    int smax = 0;
    int s = 0;
    for (int i = 1; i <= 3; i++)
    {
        s=0;
        int g = i;
        for (int j = 0; j < t; j++)
        {
            if (g == a1[j][0])
                g = a1[j][1];
            else if (g == a1[j][1])
                g = a1[j][0];
            if (g == a1[j][2])
                s++;
        }
        if(s>smax)
        smax=s;
        s=0;
    }
    cout << smax;

    return 0;
}