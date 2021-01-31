#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    string s1, s2;
    cin >> s1 >> s2;
    int k; cin >> k;

    int i = 0;
    while (i < min(s1.size(), s2.size())) {
        if (s1[i] == s2[i]) i++;
        else break;
    }
    int ans = (s1.size() - i) + (s2.size() - i);
    if (k > ans) {
        while (i--) {
            ans += 2;
            if (ans == k) {
                cout << "Yes" << "\n";
                return 0;
            }
        }
        cout << (ans <= k ? "Yes" : "No") << "\n";
        
    } else if (k < ans) {
        cout << "No" << "\n";
    } else {
        cout << "Yes" << "\n";
    }
    
    return 0;
}