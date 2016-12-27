#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base:: sync_with_stdio(false);
	int n;
	cin >> n;
	int MAX= sqrt(2500)+2;
	int arr[MAX];
	int k=0;
	for (int i = 2;i <= sqrt(n);i++)
	{
		if(n % i==0)
			arr[k++] = i;
	}
	int tot = pow(2,k);
	int cnt = 0;
	for (int i=0;i<tot;i++)
	{
		int sum = 0; 
		for(int j=0;j<k;j++)
		{
			if(i & 1<<j)
			{
				sum += arr[j];
			}
		}
		if (sum == 0)
			continue;
		for (int j=0;j<k;j++)
		{
			if (sum % arr[j] == 0)
			{
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}