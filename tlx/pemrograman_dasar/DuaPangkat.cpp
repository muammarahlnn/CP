#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    string ans = "bukan";
    if (n == 1) ans = "ya";
    for (int i = 2; i <= n; i *= 2) {
        if (i == n)  ans = "ya";
    }   

    cout << ans << "\n";

    return 0;
}