// Its Over from My Side, Can be optimized more
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	ios_base :: sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int a;
    unordered_map<int,int> ma;
    for (int i = 1; i <= m; i++)
    {
    	cin >> a;
    	ma[i] = a;
    }
    	for (int i = m + 1; i <= n; i++)
    	{
    		int sum = 0;
    		for (int j = 1; j <= m; j++)
    		{
    			sum += ma[i - j] * (pow(-1,j + 1));
    		}
    		ma[i] = sum;
    	}
    	cout << ma[n] << endl;
    return 0;
}