#include <bits/stdc++.h>
using namespace std;
char foo(int k,char ch)
{
	int n = (13 + k) % 26;
 
	if (n == 0)
		 n = 26;
		 
	int cnt = 1;
	while (cnt <= n)
	{
		if (ch == 'z')
		{
			ch = 'a';
			cnt++;
			continue;
		}
		ch++;
		cnt ++;
	}
	return ch;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	string s;
    	cin >> s;
    	map<char,int> m;
    	int len = s.length();
    	for (int i = 0; i < len; i++)
    	{
    		cout << foo(m[s[i]],s[i]);
    		m[s[i]]++;
    	}
    	cout << endl;
    }
    return 0;
}