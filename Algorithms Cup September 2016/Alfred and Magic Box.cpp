// Final Attempt
// WHY WA?
#include <bits/stdc++.h>
using namespace std;
 
struct Trie
{
	map<char,Trie*> m;
}*root = NULL;
 
void insert(int n)
{
	// cout << str << endl;
	Trie *itr = root;
	for (int i = 31;i >= 0;i--)
	{
		char bit = '0';
		if (n & 1 << i)
		{
			bit = '1';
		}
		if ((itr->m[bit]) == NULL)
		{
			itr->m[bit] = new Trie();
		}
		itr = itr->m[bit];
	}
}
 
int query(int n)
{
	Trie *itr = root;
	string ans="";
	for (int i = 31;i >=0;i--)
	{
		char bit = '0';
		if (n & 1 << i)
		{
			bit = '1';
		}
		if (bit == '0')
		{
			if(itr->m['1'] != NULL)
			{
				ans += "1";
				itr = itr->m['1'];
			}
			else
			{
				ans += "0";
				itr = itr->m['0'];
			}
		}
		else
		{
			if(itr->m['0'] != NULL)
			{
				ans += "0";
				itr = itr->m['0'];
			}
			else
			{
				ans += "1";
				itr = itr->m['1'];
			}
		}
	}
	int number = std::bitset<32>(ans).to_ulong();
	return number ^ n;
}
 
int main()
{
	root = new Trie();
	int n, q;
	cin >> n >> q;
	for (int i = 0;i < n;i++)
	{
		int a;
		cin >> a;
		insert(a);
	}
 
	while (q--)
	{
		int val;
		cin >> val;
		cout << query(val) << endl;
		insert(val);
	}
 	return 0;
}