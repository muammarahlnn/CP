#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    vector<int> alfa(26);
    for (auto c : s) alfa[c-'a']++;

    int temp = 0;
    for (auto i : alfa) {
        if (i % 2 != 0) temp++;
        if (temp > 1) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}