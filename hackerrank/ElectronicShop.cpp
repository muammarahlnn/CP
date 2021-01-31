#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, n, m;
    cin >> b >> n >> m;

    vector<int> key(n);
    for (int i = 0; i < n; i++) {
        cin >> key[i];
    }
    int ans = -1;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        for (int j = 0; j < n; j++) {
            if (key[j] + x <= b) {
                ans = max(ans, key[j] + x);
            }
        }
    }
    cout << ans << "\n";
    

    return 0;
}