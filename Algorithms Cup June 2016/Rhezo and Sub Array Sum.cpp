#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;t=readInt();while(t--)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define MIN INT_MIN
#define lli long long int
int main()
{
	lli n,p;
	cin>>n>>p;
	lli b;
	lli dp[100002];
	for(lli i=1;i<=n;i++)
	{
		cin>>b;
		if(i==0)
			dp[i]=b;
		else
			dp[i]=dp[i-1]+b;
	}
	lli ans=MIN;
	lli end=0;
	for(lli i=1;i<=n;i++)
	{
		while(dp[i]-dp[end]>p){
			end++;
		}
		ans=max(i-end,ans);
	}
	cout<<ans<<endl;
	return 0;
}