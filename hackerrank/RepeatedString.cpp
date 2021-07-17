#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    long long n; cin >> n;

    long long a = 0;
    for (auto i : s) {
        if (i == 'a') a++;
    }

    long long ans = (n / s.length()) * a;
    for (int i = 0; i < n % s.length(); i++) {
        if (s[i] == 'a') ans++;
    }
    cout << ans << "\n";
}