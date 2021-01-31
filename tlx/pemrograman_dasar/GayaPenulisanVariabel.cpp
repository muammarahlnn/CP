#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '_') {
            s.erase(i, 1);
            s[i] -= 'a' - 'A';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
            s.insert(i, "_");
        }
    }

    cout << s << "\n";
    return 0;
}