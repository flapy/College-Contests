// Din Kharab hain BC aaj! 
// Sala Fast Input hi Slow Tha :(
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 10000007
lli ret=0;
  #define inchar getchar_unlocked
            #define pc putchar_unlocked
        inline lli inp() {
    	lli n, ch;
    	while ((ch = inchar()) < '0');
    	n = (ch - '0');
    	while ((ch = inchar()) >= '0')
    		n = (n << 3) + (n << 1) + (ch - '0');
    	return n;
    }
 
lli temp;
unordered_map<lli,int> store;
int power(lli x, lli y)
{
	if (store[y] != 0)
	{
		return store[y];
	}
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
    {
    	store[y] = ((temp % MOD)*(temp % MOD)) % MOD;
        return ((temp % MOD)*(temp % MOD)) % MOD;
    }
    else
    {
    	store[y] = (((x*temp) % MOD)*temp) % MOD;
        return (((x*temp) % MOD)*temp) % MOD;
	}
}
 inline void println(int n)
    {
    	char ch[10];
    	int ind=0;
    	if(n<0)
    	{
    		pc('-');
    		n *= -1;
    	}
    	if(n == 0)
    	{
    		pc('0');
    	}
    	while(n > 0)
    	{
    		ch[ind] = n%10 + '0';
    		n /= 10;
    		ind++;
    	}
    	while(ind--) pc(ch[ind]);
    	pc('\n');
    }
int main()
{
    int t;
    t = inp();
    lli n;
    while (t--)
    {
    	n = inp();
    	if (store[n-1])
    		printf("%d\n",store[n-1]);
    	else
    		printf("%d\n",power(2,n - 1));
    }
    return 0;
}