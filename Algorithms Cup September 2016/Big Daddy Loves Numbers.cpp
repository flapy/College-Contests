#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	set<string> s;
	while (q--)
	{
		string str;
		cin >> str;
		int l = str.length();
		for(int i=0;i<l;i++)
		{
			if(str[i]<=57 && str[i]>=48)
			{
				string subString="";
				while(i<l && str[i]<=57 && str[i]>=48)
				{
					subString += str[i];
					i++;
				}
				int len = subString.length();
				int k = 0;
				
				while(k<len && subString[k]=='0')
				{
					k++;
				}
				// if(k == subString.length())
				subString = subString.substr(k);
				i--;
				s.insert(subString);
			}
		}
		// set<string> :: iterator itr;
		// for (itr = s.begin();itr!=s.end();itr++)
		// 	cout << *itr << endl;
		cout << s.size() << endl;
		s.clear();
	}
	return 0;
}