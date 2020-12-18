#include <bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
int n;
while(t--)
{
    cin>>n;
    int a[n];
    // int j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0){
    for(int i=0;i<n/2;i++)
    {
        if(i!=(n-i-1))
        {
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
        }
        
    }}
    else
    {
        for(int i=0;i<=n/2;i++)
    {
        if(i!=(n-i-1))
        {
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
        }
        
    }
        /* code */
    }
    
    cout<<"\n";

}
return 0;
}