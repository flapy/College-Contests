// Input a3,a2,a1 NOT a1,a2,a3 WOWOWOOWOW
// Sastapa wala solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#define MOD 1000000009
#define lli long long int
int f[100000006];
int main() {
    int n;
    cin >> n;
    lli a1, a2, a3;
    cin >> a3 >> a2 >> a1 >> f[1] >> f[2] >> f[3];
    set <int> s;
    for (int i = 4; i <= n; i++)
        {
        f[i] = (((a1 * f[i - 1]) % MOD) + ((a2 * f[i - 2]) % MOD) + ((a3 * f[i - 3]) % MOD)) % MOD;
    }
    cout << f[n] << endl;
    return 0;
}
