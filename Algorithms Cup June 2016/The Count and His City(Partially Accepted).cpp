//
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;t=inp();while(t--)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define lli long long int
#define MIN INT_MIN
set<pair<int,int> > s;
list<int> adj[10004];
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
bool final_vis[10004]={false};
lli ans=0;
void bfs(int i)
{
	map<int,bool> visit;
	map<int,int> dis;
	queue<int> q;
	q.push(i);
	visit[i]=true;
	dis[i]=0;
	final_vis[i]=true;
	lli net=1;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		list<int> ::iterator itr;
		for(itr=adj[u].begin();itr!=adj[u].end();itr++)
		{
			if(!visit[*itr])
			{
				q.push(*itr);
				visit[*itr]=true;
				dis[*itr]=dis[u]+1;
				if(dis[*itr]%2==0)
				{
					final_vis[*itr]=true;
					net++;
				}
			}
		}
	}
	ans+=((net*(net-1))/2);
}
int main()
{
	init
	{
		int n;
		n=inp();
                for(int i=0;i<=n;i++)
            final_vis[i]=false;
 
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			u=inp();
			v=inp();
			adj[u].push_back(v);
			adj[v].push_back(u);	
		}
		for(int i=1;i<=n;i++)
		{
			if(!final_vis[i])
			bfs(i);
		}
        for(int i=1;i<=n;i++)
            adj[i].clear();
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}