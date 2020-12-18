#include <bits/stdc++.h>
using namespace std;

int skip(int arr[],int n)
{   int c=0;
    int j=1;
    if(arr[1]==1 && n>1)
    {
    for(int i=1;i<n;i++)
    {
        if(j==1)
        {   j=0;
            if(arr[i+1]==0 && i<n-1)
            {
                while(arr[i+1]==0)
                {
                    i++;
                }
                j=1;
            }
            else if(arr[i+1]==1)
            {
                i++;
            }
            

        }
        else
        {
            if(arr[i+1]==0 && i<n-1)
            {  
                if(arr[i]==1)
                {
                    c++;
                }
                 i++;
            }
            else if(arr[i]==1)
            {
                c++;
            }
            j=1;

           
        }

    } 
        
    return c+arr[0];
    }

    else
    {   j=0;
        for(int i=0;i<n;i++)
    {   if(j==0)
      {
        if(arr[i]==1)
        {
            if(arr[i+1]==0 && i<n-1)
            {
                i++;

            }
            c++;
            j=1;
        }
        else
        {
            if(arr[i+1]==0 && i<n-1)
            {
                i++;
            }
            j=1;
        }
       }  
        else
        {
            if(arr[i+1]==1 && i<n-1)
            {
                i++;
            }
            j=0;

        }
        
        
        

    }
    return c;
        
    }
       
}

int main()
{   
    int t,n,*arr,*ans;
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