#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1="2020";
    while(t--)
    {
        int n;
        int f=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<=s1.size();i++)
        {
            string s2=s.substr(0,i);
            s2+=s.substr(n-4+i,4-i);
            if(s2==s1)
            {
                f=1;
                cout<<"YES\n";
                break;
            }

        }
        if(f==0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}