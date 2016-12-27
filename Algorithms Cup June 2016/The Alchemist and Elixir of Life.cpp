#include<bits/stdc++.h>
using namespace std;
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
	int t=inp();
	map<int,int> m;
	while(t--)
	{
		int n=inp();
		int lim=sqrt(n);
		int cnt=0;
		if(m[n])
		{
			printf("%d\n",m[n]);
			continue;
		}
		for(int i=1;i<=lim;i++)
		{
			if(n%i==0)
			{
				cnt+=n/i+i;
			}
			if(i*i==n)
			{
				cnt-=i;
			}
		}
		printf("%d\n",cnt);
		m[n]=cnt;
	}
	return 0;
}