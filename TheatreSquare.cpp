#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long c;
    if(m%a==0 && n%a==0)
    {
        c=(m/a)*(n/a);
    }
    else if(m%a==0 && n%a>0)
    {
        c=(m/a)*(n/a+1);
    }
    else if(m%a>0 && n%a==0)
    {
        c=(m/a+1)*(n/a);
    }
    else if(m%a>0 && n%a>0)
    {
        c=((m/a)+1)*((n/a)+1);
    }
    cout<<c;


}