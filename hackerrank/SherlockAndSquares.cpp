#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << "\n";
    }

    return 0;
}