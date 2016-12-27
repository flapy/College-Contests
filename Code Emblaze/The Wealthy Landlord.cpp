#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	ios_base :: sync_with_stdio(false);
    int n;
    cin >> n;
   	int k = 0;
   	int c[103];
   	unordered_map<int,unordered_map<int,list<int> > > arr;
    while (n--)
    {
    	int x1, y1, x2, y2;
    	cin >> x1 >> y1 >> x2 >> y2 >> c[k];
    	int tempX = min(x1,x2);
    	int tempY = min(y1,y2);
    	int tempX1 = max(x1,x2);
    	int tempY1 = max(y1,y2);
    	for (int i = tempX; i <= tempX1; i++)
    	{
    		for (int j = tempY; j <= tempY1; j++)
    		{
    				arr[i][j].push_back(k);
    		}
    	}
    	k++;
    }
    lli sum = 0;
    for (int i = 0; i <= 1000; i++)
    {
    	for (int j = 0; j <= 1000 ;j++)
    	{
    		if (arr[i][j].size() > 1)
    		{
    			//cout << i << " " << j << endl;
    			list<int> l = arr[i][j];
    			list<int> :: iterator itr;
    			for (itr = l.begin(); itr != l.end(); itr++)
    			{
    				//cout << *itr << endl;
    				sum += c[*itr];
    			}
    		}
    	}
    }
    cout << sum << endl;
    return 0;
}