#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base :: sync_with_stdio(false);
	string s;
	cin >> s;
	 int l = s.length();
	 map<char,int> m;
	 for (int i = 0;i < l;i++)
	 {
	 	m[s[i]]++;
	 }
	 int n;
	 cin >> n;
	 int ans = n;
	 while (n--)
	 {
	 	string str;
	 	cin >> str;
	 	map<char,int> temp;
	 	int len = str.length();
	 	for (int i = 0;i< len ;i++)
	 	{
	 		temp[str[i]]++;
	 	}
	 	map<char,int> :: iterator itr;
	 	for (itr = temp.begin();itr!=temp.end();itr++)
	 	{
	 		if(itr->second > m[itr->first])
	 		{
	 			ans--;
	 			break;
	 		}
	 	}
	 }
	 cout << ans << endl;
	return 0;
}
Language: C++