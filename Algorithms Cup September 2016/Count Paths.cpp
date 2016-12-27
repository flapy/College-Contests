#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
// From https://comeoncodeon.wordpress.com/2011/07/31/combination/
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(int n, int MOD)
{
    return pow(n,MOD-2,MOD);
}
 
long long C(int n, int r, int MOD,long long f[])
{
    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
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
int main()
{
	long long f[2000006];
	f[0] = 1;
	f[1] = 1;
    for (int i=2; i<=2000000;i++)
        f[i]= (f[i-1]*i) % mod;
    int q;
    q = readInt();
    while (q--)
    {
    	int x, y, n, m;
    	x = readInt(), y = readInt() , n = readInt() , m = readInt();
    	x-- ,y-- ,n-- ,m--;
    	printf("%lld\n",(C(x+y,x,mod,f)*C(n-x+m-y,n-x,mod,f)) % mod);
    }
    return 0;
}