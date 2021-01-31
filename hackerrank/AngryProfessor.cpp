#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int t; cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        int onTime = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x <= 0) onTime++; 
        }
        cout << (onTime < k ? "YES" : "NO") << "\n";
        
    }
    
    return 0;
}