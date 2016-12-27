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
        int m[26] = {0};
        int l = s.length();
        for (int i = 0; i < l; i++)
            m[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            {
            if (m[i])
                while (m[i])
                {
                    cout << (char)(i + 'a');
                    m[i]--;
            }
        }
        cout << endl;
	}
	return 0;
}