#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    if (n >= 1) {
        solve(n-1);
        for (int i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << "\n";
        solve(n-1);
    }
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    solve(n);

    return 0;
}