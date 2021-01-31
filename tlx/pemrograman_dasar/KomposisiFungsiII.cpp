#include <bits/stdc++.h>
using namespace std;

int a, b;

int solve(int k, int x) {
    if (k == 0) return x; 
    else return abs(a * solve(k-1, x) + b);
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, x;
    cin >> a >> b >> k >> x;

    cout << solve(k, x) << "\n";

    return 0;
}