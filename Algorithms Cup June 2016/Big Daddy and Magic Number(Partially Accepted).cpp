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
#define MOD 1000000007
#define inchar getchar_unlocked
#define pc putchar_unlocked
    inline int inp() {
	int n, ch;
	while ((ch = inchar()) < '0');
	n = (ch - '0');
	while ((ch = inchar()) >= '0')
		n = (n << 3) + (n << 1) + (ch - '0');
	return n;
}
int main()
{
	lli n;
	n=inp();
	lli hi=pow(2,n);
	lli a[262188];
	for(int i=0;i<hi;i++)
	{
		a[i]=inp();
	}
	int q;
	q=inp();
			vector<lli> v;
		vector<lli> cur;
 
	while(q--)
	{
		v.clear();
		cur.clear();
		lli x,y;
		x=inp();
		y=inp();
		a[x-1]=y;
		for(int i=0;i<hi;i+=2)
		{
			v.push_back((a[i]+a[i+1])%MOD);
		}
		if(n==1)
		{
			printf("%lld\n",v[0]);
			continue;
		}
		int cnt=1;
		while(1)
		{
			if(cnt%2)
			{
				int l=v.size();
				for(int i=0;i<l;i+=2)
				{
					cur.push_back((v[i]*v[i+1])%MOD);
				}
				if(cur.size()==1)
				{
					printf("%lld\n",cur[0]);
					break;
				}
				v.clear();
			}
			else
			{
				int l=cur.size();
				for(int i=0;i<l;i+=2)
				{
					v.push_back((cur[i]+cur[i+1])%MOD);
				}
				if(v.size()==1)
				{
					printf("%lld\n",v[0]);
					break;
				}
				cur.clear();
			}
			cnt++;
		}
	}
	return 0;
}