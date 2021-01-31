#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if (n == 1) return 1;
    else if (n % 2 == 0) return n / 2 * solve(n-1);
    else return n * solve(n-1);

}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << solve(n) << "\n";

    return 0;
}