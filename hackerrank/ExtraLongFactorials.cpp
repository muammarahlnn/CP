#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n; cin >> n;
    long long ans = 1;
    for (int i = n; i >= 2; i--) {
        ans *= i;
    }
    cout << ans << "\n";
    
    return 0;
}