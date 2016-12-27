#include <bits/stdc++.h>
using namespace std;
#define lli long long int
void fillVector(lli n)
{
	vector<lli> first, second;
    for (lli i = 1; i <= sqrt(n); i++)
    {
        if (n % i==0)
        {
            if (i *i == n) 
                first.push_back(i);
            else
            {
                first.push_back(i);
                second.push_back(n/i);
            }
        }
    }
    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] != 1 && first[i] != n)
            cout << first[i] << " ";
    }
    for (int i = second.size() - 1; i >= 0; i--)
        if (second[i] != 1 && second[i] != n)
            cout << second[i] << " ";
     cout << endl;
}
void display(vector<lli> v)
{
	vector<lli> :: iterator itr;
	for (itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
}
int main()
{
    int t;
    cin >> t;
    // map<lli,vector<lli> > m;
    while (t--)
    {
    	lli n;
    	cin >> n;
    	// if (m[n].size() == 0)
    	// {
    		//m[n] = 
    		fillVector(n);
    		//display(m[n]);
    	// }
    	// else
    	// 	display(m[n]);
    }
    return 0;
}