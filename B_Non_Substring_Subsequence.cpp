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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int x, y;
        bool f1 = false, f2 = false;
        for (int i = 0; i < q; i++)
        {
            cin >> x >> y;
            f1=false;
            f2=false;
            string s1 = s.substr(x - 1, y - x + 1);
            for (int j = 0; j < x; j++)
            {
                if (s[j] == s1[0])
                {
                    if (j != x - 1)
                    {
                        f1 = true;
                        break;
                    }
                    else
                    {
                        f1 = false;
                        break;
                    }
                }
            }
            for (int j = y; j < n; j++)
            {
                if (s[j] == s1[s1.size()-1])
                {
                    f2=true;
                }
            }
            if(f1 || f2)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
            cout<<endl;
            
        }
    }

    return 0;
}