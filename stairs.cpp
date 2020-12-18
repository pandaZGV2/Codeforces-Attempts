#include <bits/stdc++.h>
using namespace std;
int main()
{ 
int t,c,* arr;
long long int n;
long long int f,j;
cin>>t;
arr=new int [t];
for (int i=0;i<t;i++)
{   c=0;
int a=1;
    cin>>n;
    for (j=1;n>0;j=j+pow(2,a++))
    {   f=j*(j+1)/2;
        if (f<=n)
        {n=n-f;
        c++;}
        else
        {
            n=0;
        }
        
    }
    arr[i]=c;

}
for (int i=0;i<t;i++)
{
    cout<<arr[i]<<"\n";
}

}