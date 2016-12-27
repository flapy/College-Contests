#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		lli n,k;
		cin >> n >> k;
		if (n >= k)
			cout << n%k << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}