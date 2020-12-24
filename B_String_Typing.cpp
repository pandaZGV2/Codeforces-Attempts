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
    int n;
    string s1;
    cin >> n;
    cin >> s1;
    string temp, curr;
    temp = s1[0];
    bool f1 = true;
    int extra = n;
    int count = 0;
    int len;
    int lens=0;
    for (int i = 1; i <= n / 2; i++)
    {
        curr = temp + temp;
        //cout << curr << endl;
        len = curr.size();
        // cout<<len<<endl;
        for (int j = 0; j < len ; j++)
        {
            if (curr[j] != s1[j])
            {
                f1 = false;
                break;
            }
            else
            {
                f1 = true;
            }
        }
        if (f1 == true)
        {
            extra = n - len;
            lens=len;
            count = 1;
        }
        // cout<<lens<<" "<<extra<<endl;
        temp += s1[i];
    }
    if(extra==n)
    {
        cout<<extra;
    }
    else if (len <= n)
    {
        cout << extra + lens/2+count;
    }

    return 0;
}