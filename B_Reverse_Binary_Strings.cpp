#include <iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int n;
    int s;
    while(t--)
    {
        cin>>n;
        int a[n];
        s=0;
        for(int i=0;i<n;i++)
        {
            scanf("%1d",&a[i]);

            if(a[i]==a[i-1] && i>=1)
            {
                s++;
            }
        }
        cout<<((s+1)/2);
        cout<<"\n";
    }

    return 0;
}