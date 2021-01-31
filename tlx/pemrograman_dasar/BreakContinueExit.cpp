#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 0) continue;
        if (i == 42) {
            cout << "ERROR";
            break;
        }
        cout << i << "\n";
    }

    return 0;
}