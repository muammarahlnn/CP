#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 'a' - 'A';
        } else {
            s[i] += 'a' - 'A';
        }
    }
    cout << s << "\n";

    return 0;
}