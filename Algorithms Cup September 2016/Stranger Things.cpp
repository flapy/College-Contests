#include <bits/stdc++.h>
using namespace std;
#define lli long long int
map<lli,vector<lli> > m;
 
lli lcm(vector<lli> v)
{
	lli n = v.size();
	if(n==1)
		return v[0];
	lli lcm = 1;
	for (int i = 0;i < n;i++)
	{
		lcm = lcm*v[i]/(__gcd((lli)lcm,(lli)v[i]));
	}
	return lcm;
}
void init(lli arr[],lli n)
{
	lli tot = pow(2,n);
	for (int i = 0;i < tot;i++)
	{
		vector<lli> v;
		for (int j = 0;j < n;j++)
		{
			if(i & 1<<j)
			{
				v.push_back(arr[j]);
			}
		}
		
		int l = v.size();
		if(!l)
			continue;
		m[l].push_back(lcm(v));
	}
}
 
lli getSum(lli key,lli k)
{
	vector<lli> v = m[key];
	vector<lli> :: iterator itr;
	lli sum = 0;
	//cout << key << endl;
	for (itr = v.begin(); itr != v.end();itr++)
	{
			//cout << *itr << " ";
		sum += (k/(*itr));
	}
	return sum;
}
 
void finalTask(lli k,lli arr[],lli n)
{
	lli ans = 0;
	lli sign = 1;
	for (int i = 1;i <= n;i++)
	{
		// cout << i << " " ;
		lli sum = getSum(i,k);
		// cout << sum << endl;
		ans += (sum*sign);
		sign *= -1;
	}
	cout << ans << endl;
}
 
int main()
{
	ios_base :: sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		lli n;
		cin >> n;
		lli arr[n+2];
		for (int i=0;i<n;i++)
			cin >> arr[i];
		lli k;
		cin >> k;
		// if(k <= 1000)
		// {
		// 	SubTask1(k,arr,n);
		// }
		init(arr,n);
		finalTask(k,arr,n);
		m.clear();
	}
	return 0;
}