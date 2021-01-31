#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (v2 >= v1) {
        cout << "NO" << "\n";
        return 0;
    }

    string ans = "";
    while (true) {
        x1 += v1;
        x2 += v2;
        if (x1 == x2) {
            ans = "YES";
            break;
        }
        if (x1 > x2) {
            ans = "NO";
            break;
        }
    }
    cout << ans << "\n";

    return 0;
}