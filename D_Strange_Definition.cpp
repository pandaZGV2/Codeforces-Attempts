#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<vi> vii;

#define f first
#define s second
#define pb push_back
#define endl "\n"
#define iamspeed cin.tie(0) -> sync_with_stdio(0)
vector<int> isprime(1000007, 1);

int main(void)
{
	iamspeed;
	for (int i = 0; i < 1000001; i++)
	{
		isprime[i] = i;
	}
	for (int i = 2; i < 1000001; i++)
	{
		if (isprime[i] == i)
		{
			for (int j = 2 * i; j < 1000001; j += i)
			{
				if (isprime[j] == j)
					isprime[j] = i; //isprime[i] is the smallest prime factor of i
			}
		}
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		vector<vi> factors(n);
		vi keys(n, 1);
		int evens = 0;
		map<int, int> m;

		for (int i = 0; i < n; i++)
		{
			int cpy = a[i];
			int cnt = 1;
			for (int p = isprime[cpy]; cpy > 1; cnt++)
			{
				cpy = cpy / p;
				if (cpy % p != 0)
				{
					cnt %= 2;
					if (cnt)
					{
						factors[i].pb(p);			 //check if the parity of the factor is odd, if it is push to factors[i]
						keys[i] *= isprime[cpy * p]; //Multiply the smalles prime factor of isprime[cpy*p]
					}
					cnt = 0;
				}
				p = isprime[cpy];
			}
			if (factors[i].size() == 0)
			{
				evens++; //If the number of factors of odd parity is 0 then inc evens
			}
			else
			{
				m[keys[i]]++; //if there are factors of odd parity increment its pos(keys[i]) in the map
			}
		}
		int maxlen = evens;
		//set maxlen to evens initially and check if there are groups which have larger size than it
		int maxevens = evens;
		//Set maxevens to evens and then add the number of elements which is even as they will become 1 in the next second
		for (auto i : m)
		{
			maxlen = max(maxlen, i.s);
			if (i.s % 2 == 0)
			{
				maxevens += i.s;
			}
		}
		int maxlen2 = maxevens;
		//Set maxlen2 to maxevens and then check if there is any key of odd length which is greater
		for (auto i : m)
		{
			if (i.s % 2 == 1)
			{
				maxlen2 = max(maxlen2, i.s);
			}
		}
		int q;
		cin >> q;
		for (int i = 0; i < q; i++)
		{
			ull w;
			cin >> w;
			//If w=0, we have to use maxlen as it is the 0th second and no replacement has taken place yet
			//If w>0, we have to use maxlen2 as replacements have taken place
			if (w == 0)
			{
				cout << maxlen << endl;
			}
			else
			{
				cout << maxlen2 << endl;
			}
		}
	}
}