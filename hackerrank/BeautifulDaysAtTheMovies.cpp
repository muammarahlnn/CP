#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int l, r, k;
    cin >> l >> r >> k;

    int ans = 0;
    for (int i = l; i <= r; i++) {
        int n = i;
        int rev = 0;
        while (n != 0) {
            int temp = n % 10;
            rev = (rev * 10) + temp;
            n /= 10;
        }
        if (abs(i - rev) % k == 0) ans++;
    }
    cout << ans << "\n";
    
    return 0;
}