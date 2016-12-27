#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	if (n==1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
	bool mark[1000004];
 
void sieve()
{
	mark[1] = false;
	for (int i = 2; i <= 1000000; i++)
		mark[i] = true;
	for (int i = 2;i <= sqrt(1000000); i++)
	{
		if (mark[i])
		{
			int j = i*2;
			int mul = 2;
			while (j <= 1000000)
			{
				mark[j] = false;
				j = i * (++mul);
			}
		}
	}
}
#define lli long long int
int main()
{
	ios_base :: sync_with_stdio(false);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
    	lli n, k;
    	cin >> n >> k;
    	long long int sum = 0;
    	int cnt = 0;
    	for (int i = 0; i < n;i++)
    	{
    		int a;
    		cin >> a;
    		if (mark[a])
    		{
    			cnt++;
    			if (cnt % k == 0)
    			sum += a;
    		}
    	}
    	cout << sum << endl;
    }
    return 0;
}