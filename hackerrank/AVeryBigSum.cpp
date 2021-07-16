#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long num; cin >> num;
        ans += num;
    }
    cout << ans << "\n";
    
    return 0;
}