#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ans[(i+k) % n] = x;
    }
    
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        cout << ans[x] << "\n";
    }
    
    return 0;
}