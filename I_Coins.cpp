#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    vector<double> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    double dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=0.0;
        }
    }
    dp[0][0]=1.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            {
                dp[i][j]=dp[i-1][j]*(1-a[i]);
            }
            else
            dp[i][j]=dp[i-1][j-1]*a[i]+dp[i-1][j]*(1-a[i]);
        }
    }
    double ans=0;
    for(int i=(n+1)/2;i<=n;i++)
    {
        ans+=dp[n][i];
    }
    printf("%.15lg",ans);

    return 0;
}