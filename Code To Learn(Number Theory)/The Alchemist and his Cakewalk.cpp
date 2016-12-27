// 5th Mein Locha Its MOD with -ve nos.
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
vector<int> v;
void calcPrimes()
{
	int n = 10000000;
	bool primes[10000005];
	memset(primes,true,sizeof(primes));
	primes[1] = false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (primes[i])
		{
			int j = 2;
			while (i * j <= n)
			{
				primes[i*j] = false;
				j++;
			}
		}
	}
	for (int i = 1;i <= n; i++)
	{
		if (primes[i])
			v.push_back(i);
	}
}
int main()
{
	calcPrimes();
	ios_base :: sync_with_stdio(false);
	int id, n;
	cin >> id >> n;
	if (id == 1)
	{
		cout << v[n - 1] << endl;
	}
	else if (id == 3)
	{
		int si = v.size();
		int cnt = 0;
		for (int i = 1; i < si; i++)
		{
			if (v[i] - v[i-1] == 2)
			{
				cnt++;
				if (cnt == n)
				{
					cout << (v[i] + v[i - 1]) / 2 << endl;
					break;
				}
			}
		}
	}
	else if (id == 4)
	{
		lli a[n+2];
		a[0] = 3;
		a[1] = 6;
		a[2] = 14;
		for (int i = 3; i <= n; i++)
		{
			a[i] = (((6 * a[i - 1]) % MOD) - ((11 * a[i - 2]) % MOD) + ((6 * a[i - 3]) % MOD)) % MOD;
		}
		cout << a[n] << endl;
	}
	else if (id == 2)
	{
		 cout<< __builtin_popcount (n) << endl;
	}
	else if (id == 5)
	{
		lli ans = 23;
		int cnt = 1;
		int si = v.size();
		for (int i = 0 ; i < si; i++)
		{
			if (cnt == n)
				break;
			cnt++;
			if (i % 2)
			{
				ans = ((ans + (lli)v[i]) + MOD) % MOD;
			}
			else
			{
				ans = (ans - (lli)v[i] + MOD) % MOD;
			}
 
		}
		cout << ans << endl;
	}
	return 0;
}