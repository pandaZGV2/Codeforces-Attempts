#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        // int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i || j==n-i-1)
                {
                    a[i][j]=1;

                }
                else
                {
                    a[i][j]=0;
                }
                


            }
        }
        if(n%2==1)
        {
            a[n/2][0]=1;
            a[n/2][n-1]=1;
            a[0][n/2]=1;
            a[n-1][n/2]=1;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        
    }
return 0;
}