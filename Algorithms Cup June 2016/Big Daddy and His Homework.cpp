#include<bits/stdc++.h>
using namespace std;
 
	long long MOD=1000000007;
long long pow(long long x,long long y)
{
if (y==0)
       return 1;
    long long temp = pow(x, (long long )y/2);
    if (y%2 == 0)
        return (((temp%MOD)*temp)%MOD);
    else
       return ((((x*temp)%MOD)*temp)%MOD);
}
int main()
{
	int n,q;
	cin>>n>>q;
	long long int sum,prod;
	prod=1;
	sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=(sum+i)%MOD;
		prod=(prod*i)%MOD;
	}
	while(q--)
	{
		long long k;
		cin>>k;
		// (a/b)%m = ((a%m)(b^(m-2)%m))%m.		
		long long ans=((prod%MOD)*pow(k,MOD-2)%MOD)%MOD;
		cout<<(ans-(sum-k)+MOD)%MOD<<endl;
	}
	return 0;
}