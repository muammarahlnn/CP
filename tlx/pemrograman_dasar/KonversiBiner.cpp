#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
    if (n == 1) return "1";
    else if (n % 2 == 1) return solve(n/2) + "1";
    else return solve(n/2) + "0";
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << solve(n) << "\n";

    return 0;
}