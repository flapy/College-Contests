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
bool visit[100003]={false};
int gcd(int a, int b);
 
// To compute x raised to power y under modulo m
 
int main()
{
	init
	{
		string s;
		cin>>s;
		int l=s.length();
		int cnt=1;
		int flag=1;
		for(int i=0;i<l-1;i++)
		{
			if(s[i+1]==s[i])
			{
				cnt++;
				flag=1;
			}
			else
			{
				cout<<cnt<<s[i];
				cnt=1;
				flag=0;
			}
		}	
		if(!flag)
			cout<<1<<s[l-1];
		else
			cout<<cnt<<s[l-1];
		cout<<endl;
	}
	return 0;
}