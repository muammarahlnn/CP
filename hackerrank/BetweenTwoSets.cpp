#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int ans = 0;
    for (int num = a[n-1]; num <= b[0]; num++) {
        // cout << num << " ";
        // vector<bool> flags(2);
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (num % a[i] != 0) {
                flag = true;
                break;
            }
        }
        if (flag) continue;
        for (int i = 0; i < m; i++) {
            if (b[i] % num != 0) {
                flag = true;
                break;
            }
        }
        if (!flag) ans++;
    }
    cout << ans << "\n";

    return 0;
}