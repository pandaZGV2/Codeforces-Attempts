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
bool divideArray(vi arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int sum_so_far = 0;

    for (int i = 0; i < n; i++)
    {
        if (2 * sum_so_far + arr[i] == sum)
        {

            return true;
        }
        sum_so_far += arr[i];
    }

    return false;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vi a;
        int c;
        cin >> n;
        int s = 0, s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >>c;
            a.pb(c);
            s += a[i];
            if (a[i] == 1)
            {
                s1++;
            }
            else
            {
                s2 = s2 + 2;
            }
        }
        if (s % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            if (s1 % 2 == 1)
            {
                cout << "NO\n";
            }
            else if (s1 == 0 && s2 % 4 != 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}