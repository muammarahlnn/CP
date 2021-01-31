#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = 0, temp = n;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit != 0 && n % digit == 0) ans++;
            temp /= 10;
        }
        cout << ans << "\n";
    }
    
    return 0;
}