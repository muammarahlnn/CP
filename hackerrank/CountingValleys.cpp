#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    int height = 0, ans = 0;
    bool in = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'U') height++;
        else height--;

        if (height < 0) in = true;
        if (in && height >= 0) {
            ans++;
            in = false;
        }
    }
    cout << ans << "\n";

    return 0;
}