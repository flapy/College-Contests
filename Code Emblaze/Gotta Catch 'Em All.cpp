#include <bits/stdc++.h>
using namespace std;
int a[1000005];
 
bool mark[1000004];
 
void init(int n)
{
	memset(a,0,sizeof(a));
	for (int i = 1; i <= n; i++)
	{
		if (!mark[i])
		{
			int j = 1;
			while (i * j <= 1000000)
			{
				a[i*j]++;
				j++;
			}
		}
		else
			a[i] = 2;
	}
}
 
int main()
{
    int t, n;
    cin >> t >> n;
    init(n);
    int b[n+3];
    b[0] = 0;
    for (int i = 1; i <= n; i++)
    	b[i] = a[i];
    sort(b,b+n+1);
    while (t--)
    {
    	int k;
    	cin >> k;
    	int strength = a[k];
    	int ind = lower_bound(b,b+n+1,strength) - b;
    	cout << ind - 1 << endl;
    }
    return 0;
}