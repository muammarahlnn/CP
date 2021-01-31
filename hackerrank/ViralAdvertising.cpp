#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n; cin >> n;
    int ans = 0, shared = 5;
    for (int i = 1; i <= n; i++) {
        int liked = shared / 2;
        shared = liked * 3;
        ans += liked;
    }
    cout << ans << "\n";
    
    return 0;
}