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
    cin >> n;
    vector<ull> a(n);
    ull sinit = 0;
    ull amax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sinit += a[i] - 1;
    }
    sort(a.begin(), a.end());
    amax=a[n-1];
    ull cost = 0;
    ull costmin = sinit;
    sinit = sinit + amax;
    ull i = 1;
    while (pow(i, n-1) <= sinit)
    {
        ull s = 0;
        for (int j = 0; j < n; j++)
        {
            s += abs(a[j] - pow(i, j));
        }
        costmin=min(s,costmin);
        i++;
    }
    cout<<costmin<<endl;
    return 0;
}