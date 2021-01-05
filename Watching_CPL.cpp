#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define endl "\n"
typedef long long int ll;
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int mintowa=0,mintowb=0;
int minCount(int K) 
{ 
    // we will only store min counts 
    // of sum upto 100 
    int memo[100]; 
  
    // initialize with INT_MAX 
    for (int i = 0; i < 100; i++) { 
        memo[i] = INT_MAX; 
    } 
  
    // memo[0] = 0 as 0 is 
    // made from 0 elements 
    memo[0] = 0; 
  
    // fill memo array with min counts 
    // of elements that will constitute 
    // sum upto 100 
  
    for (int i = 1; i < 100; i++) { 
        memo[i] = min(memo[i - 1] + 1, memo[i]); 
    } 
  
    for (int i = 10; i < 100; i++) { 
        memo[i] = min(memo[i - 10] + 1, memo[i]); 
    } 
  
    for (int i = 25; i < 100; i++) { 
        memo[i] = min(memo[i - 25] + 1, memo[i]); 
    } 
  
    // min_count will store min 
    // count of elements chosen 
    long min_count = 0; 
  
    // starting from end iterate over 
    // each 2 digits and add min count 
    // of elements to min_count 
    while (K > 0) { 
        min_count += memo[K % 100]; 
        K /= 100; 
    } 
  
    return min_count; 
} 
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int c;
        vi a;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a.push_back(c);
        }
        sort(a.begin(), a.end());
        int towa = 0, towb = 0;
        int cnt = 0;
        
        if (towa >= k && towb >= k)
            cout << cnt << endl;
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}