#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        int s=0;
        if(n>45)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            if((n/10)==0)
            {
                cout<<n<<endl;
            }
            else
            {
                int n1=n;
                for(int i=9;i>=1;i--)
                {
                    if(n-i>=0)
                    {
                        s+=i;
                        n-=i;
                        a.push_back(i);
                    }


                }
                if(n1==s)
                {
                   for(int i=a.size()-1;i>=0;i--)
                   {
                       cout<<a[i];
                   }
                   cout<<"\n";
                    
                }
                else
                {
                    cout<<"-1\n";

                }
                
                
            }
            
        }
        
    }
    return 0;
}