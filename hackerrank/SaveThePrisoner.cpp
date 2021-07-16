#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t; cin >> t;
    while (t--) {
        int n, m, s;
        cin >> n >> m >> s;

        int ans = (m % n + s - 1) % n == 0 ? n : (m % n + s - 1) % n;
        cout << ans << "\n";
    }
    
    return 0;
}