#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) ans *= 2;
            else ans++;
        }
        cout << ans << "\n";
    }
    
    return 0;
}