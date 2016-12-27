#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt", "w",stdout);
    ios_base :: sync_with_stdio(false);
	int t ;
    cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		sort(s.begin(),s.end());
		cout << s << endl;
	}
	return 0;
}