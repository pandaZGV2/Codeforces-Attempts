#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int& t:a)
        {
            cin>>t;
        }
        bool f=true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                f=false;
                break;
            }
        }
        if(!f)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
