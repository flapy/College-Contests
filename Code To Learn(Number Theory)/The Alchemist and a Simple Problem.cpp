// Same question already exists on the internet then Why should I solve?? :P
#include<bits/stdc++.h>
using namespace std;
 
#define rep($, a, b) for(int $=(a); $<(b); ++$)
#define per($, b, a) for(int $=(b); $>=(a); --$)
#define MOD 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
 
int T;
ll N, R, M;
ll prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
 
ll ncrModi(ll ni, ll ri, ll m) {
    if(ni<ri) return 0;
    if(ri==0) return 1;
    if(ri==1) return ni;
    vector<ll> C(ri+1, 0);
    C[0]=1;
    rep(i, 1, ni+1) 
    per(j, min(ll(i), ri), 1) 
        C[j]=(C[j]+C[j-1])%m;
    return C[ri];
}
 
ll ncrLucas(ll n, ll r, ll m) {
    if(n==0 || r==0) return 1;
    ll ni=n%m, ri=r%m;
    ll res=ncrLucas(n/m, r/m, m);
    res=(res*ncrModi(ni, ri, m))%m;
    //printf("%lld: (n %lld r %lld)\n", res, n, r);
    return res;
}
 
int CRT(vector<ll> num, vector<ll> rem) {
    int x=0, j;
    while(1) {
        for(j=0; j<rem.size(); ++j)
        if (x%rem[j] != num[j]) break;
        
        if (j == rem.size()) return x;
        x++;
    }
    return x;
}
 
void solve() {
    vector<ll> num, rem;
	ll tp=M; int idx=0;
	while(tp>1) {
	    ll k=1;
	    while(tp%prime[idx]==0) tp/=prime[idx], k*=prime[idx];
	    if(k>1) {
	        rem.push_back(k);
	        num.push_back(ncrLucas(N, R, k));
	    }
	    ++idx;
	}
	printf("%d\n", CRT(num, rem));
}
 
int main() {
    
    scanf("%d", &T);
	while(T--) {
		scanf("%lld %lld %lld", &N, &R, &M);
		solve();
	}
	return 0;
}