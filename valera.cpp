#include <bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[50]={0},s=0,p;
int v;
int n;
int f=0;
cin>>n>>v;
int x;
for(int i=0;i<n;i++)
{   f=0;
    cin>>x;
    for(int j=0;j<x;j++)
    {
        cin>>p;
        if(v>p)
        {   if(f==0)
            {s++;
            f=1;}
            a[i]=1;
        }
    }


}
cout<<s<<endl;
for(int i=0;i<n;i++)
{   if(a[i]==1)
    cout<<i+1<<" ";
}
return 0;
}