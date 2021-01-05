#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007
#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int x = 1;
    while(n--)
    {
        x*= 2;
        x = x% MOD;
    }
    cout<<x<<endl;
}
