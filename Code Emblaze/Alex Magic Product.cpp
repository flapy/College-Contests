#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	string s;
    	cin >> s;
    	int a, b;
    	cin >> a >> b;
    	lli MOD = pow(10,a) + b;
    	lli ans = 1;
    	int len = s.length();
    	for (int i = 0; i < len; i++)
    	{
    		int count = s[i] - 48;
    		int j = 0;
    		string str = "";
    		while (j < count && i + j < len)
    		{
    			str += s[i+j];
    			j++;
    		}
    		i = i + count - 1;
    		int val = stoi(str);
    		ans = (ans * val) % MOD;
    	}
    	
    	cout << ans << endl;
    }
    return 0;
}