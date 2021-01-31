#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string ans = "YA";
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                ans = "BUKAN";
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}