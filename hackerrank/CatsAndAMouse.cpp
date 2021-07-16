#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        if (abs(x - z) > abs(y - z)) {
            cout << "Cat B\n";
        } else if (abs(x - z) < abs(y - z)) {
            cout << "Cat A\n";
        } else {
            cout << "Mouse C\n";
        }
    }
    

    return 0;
}