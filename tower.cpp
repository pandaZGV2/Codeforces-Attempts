#include <bits/stdc++.h>
using namespace std;

int skip(int arr[],int n)
{   int c=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(j%2==0)
        {
            if(arr[i]==1)
            {  
                if(arr[i+1]==0 && i<n-1)
                {i++;}
                c++;
            }
            else
            {
                if(arr[i+1]==0 && i<n-1)
                {
                    i++;
                }
            }
            
            j=1;
        }
        else
        {
            if (arr[i+1]==1 && i<n-1)
            {
                i++;
            }
            j=0;
        }
    }
    return c;
       
}
int main()
{   int t,n,*arr,*ans;
    cin>>t;
    ans=new int [t];
    for(int i=0;i<t;i++)
    {
        cin>>n;
        arr=new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        ans[i]=skip(arr,n);
    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}