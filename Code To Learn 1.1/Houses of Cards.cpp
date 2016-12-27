#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    int prefixMax[n + 2];
    prefixMax[0] = a[0];
    for (int i = 1; i < n; i++)
        {
        prefixMax[i] = max(a[i],prefixMax[i - 1]);
    }
    int suffixMax[n + 2];
    suffixMax[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        {
        suffixMax[i] = max(a[i],suffixMax[i + 1]);
    }
    while (q--)
        {
        int l, r;
        cin >> l >> r;
        l--; r--;
        if (l - 1 < 0 && r + 1 >= n)
            cout << -1 << endl;
        else if (l - 1 < 0)
            cout << suffixMax[r + 1] << endl;
        else if (r + 1 >= n)
            cout << prefixMax[l - 1] << endl;
        else
            cout << max(prefixMax[l - 1],suffixMax[r + 1]) << endl;
    }
    return 0;
}
