#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define recur(i,a,b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int power(int a,int b)
{
    if (b == 0)
        return 1;
    long long int tmp = power(a,b / 2);
    long long int result = tmp * tmp;
    if (b % 2 == 1)
        result = result * a;
    return result;
}
void intswap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
void charswap(char &a,char &b)
{
    char t=a;
    a=b;
    b=t;
}
ll fac(ll n)
{
    ll f=1;
    for(int i=2;i<=n;i++)
    {
        f=f*i;
    }
    return f;
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    cout<<2*fac(n)/(n*n)<<endl;

    return 0;
}