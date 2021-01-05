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
#define modint int(1e9+7)
#define mod 1e9+7
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
ll fib(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        ull a=1,b=1,c=1;
        for(int i=0;i<=n-2;i++)
        {
            c=(a%modint+b%modint)%modint;
            b=a%modint;
            a=c%modint;
        }
        return c%modint;
    }
}
int main(void)
{
    iamspeed;
    int x,y;
    cin>>x>>y;
    // ll F[2][2] = {1, 1, 1, 0};
    // ll F1[2][2] = {1, 1, 1, 0};
    // mat(F,x-1);
    // mat(F1,y-2);
    cout<<2*(fib(x)+fib(y)-1)%modint<<endl;

  return 0;
}