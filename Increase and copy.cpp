#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        cout<<ceil(2*sqrt(n))-2<<"\n";
        t--;
    }
return 0;
}