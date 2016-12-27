#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
 
void addEdge(int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}
char colour[100004];
int n,m;
bool isBipartite()
{
	bool ans=true;
	for(int i=1;i<=n;i++)
	{
		colour[i]='w';
	}
	queue<int> q;
 
	for(int i=1;i<=n;i++)
	{
		if(colour[i]=='w')
		{
			colour[i]='b';
			q.push(i);
			while(!q.empty())
			{
				char col;
				int x=q.front();
				q.pop();
				if(colour[x]=='b')
				col='r';
				else if(colour[x]=='r')
				col='b';
				vector <int> :: iterator i;
				for(i=adj[x].begin();i!=adj[x].end();i++)
				{
					if(colour[*i]=='w')
					{
						colour[*i]=col;
						q.push(*i);
					}
					else
					{
						if(colour[*i]==colour[x])
						{
							ans=false;
							break;
						}
					}
					if(!ans)
					break;
				}
				if(!ans)
				break;
			}
			if(!ans)
				break;
		}
	}
	if(ans)
	{
		return true;
	}
	return false;
}
int main()
{
	int t;
	t = readInt();
	while (t--)
	{
		n = readInt();
		m = readInt();
		for (int i = 1;i <= n;i++)
			adj[i].clear();
		while (m--)
		{
			int a,b;
			a = readInt();
			b = readInt();
			addEdge(a,b);
		}
		if(isBipartite())
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}