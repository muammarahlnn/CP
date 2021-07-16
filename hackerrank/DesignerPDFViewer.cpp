#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    vector<int> alfa(26);
    for (int i = 0; i < 26; i++) {
        cin >> alfa[i];
    }
    string s; cin >> s;
    int mx = 1;
    for (int i = 0; i < s.size(); i++) {
        mx = max(mx, alfa[s[i] - 'a']);
    }
    cout << mx * s.size() << "\n";
    
    return 0;
}