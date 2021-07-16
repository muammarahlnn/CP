#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n, k;
    cin >> n >> k;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mx = max(mx, x);
    }
    int ans = mx - k;
    if (ans < 0) ans = 0;
    cout << ans << "\n";

    return 0;
}