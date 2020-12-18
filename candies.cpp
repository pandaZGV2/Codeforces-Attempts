#include <bits/stdc++.h>
using namespace std;

int candy(int n,int arr[])
{   int c=0,a,b=0;
    int ca=0;
    int cb=0;
    int ab[3];
    for(int i=0,j=n-1;(i<n) && (j>0);)
    {
        if (c%2==0)
        {   a=0;
            for(;i<n;i++)
            {
                if (a+arr[i]<=b)
                {
                    a+=arr[i];
                    ca+=arr[i];
                    arr[i]=0;
                    c++;
                    i--;
                }
                if (arr[i]==0)
                {
                    break;
                }
                

                else
                {
                    ab[1]=ca;
                    ab[2]=cb;
                    ab[0]=c+1;
    
                    return *ab;

                }
            }
        
        }
        else
        {   b=0;
            for(;j>0;j--)
            {
                if (b+arr[j]<=a)
                {
                    b+=arr[j];
                    cb+=arr[j];
                    arr[j]=0;
                    c++;
                    j++;
                }
                if (arr[i]==0)
                {
                    break;
                }
                else
                {
                    ab[1]=ca;
                    ab[2]=cb;
                    ab[0]=c+1;
    
                    return *ab;
                    
                }
            }
        }
        

        
    }
    
}
int main()
{   
    int n,t,*arr;
    cin>>t;
    int **ab;

        ab = new int*[t];
        for(int i=0;i<t;i++){
           ab[i]=new int[3];
        }
    for(int i=0;i<t;i++)
    {
        cin>>n;
        arr=new int [n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        *ab[i]=candy(n,arr);
    }
    for(int i=0;i<t;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<ab[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}