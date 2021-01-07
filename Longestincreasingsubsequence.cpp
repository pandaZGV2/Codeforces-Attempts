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
int length[100]={0};
void solve(int n,int array[])
{
    for (int k = 0; k < n; k++)
    {
        length[k] = 1;
        for (int i = 0; i < k; i++)
        {
            if (array[i] < array[k])
            {
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }
}
int main(void)
{
    iamspeed;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(n,a);
    int m=0;
    for(int i=0;i<n;i++)
    {
        m=max(m,length[i]);
    }
    cout<<m<<endl;

    return 0;
}