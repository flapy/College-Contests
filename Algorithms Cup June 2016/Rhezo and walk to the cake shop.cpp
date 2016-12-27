#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;cin>>t;while(t--)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define lli long long int
#define MIN INT_MIN
int main()
{
	lli x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	lli homeToCake=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	lli cToC=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	lli homeToCandle=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
	cout<<min(homeToCandle,homeToCake)+cToC<<endl;
	return 0;
}