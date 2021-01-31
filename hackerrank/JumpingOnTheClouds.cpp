#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n, k; 
    cin >> n >> k;
    vector<int> clouds(n);
    for (int i = 0; i < n; i++) {
        cin >> clouds[i];
    }

    int c = 0, e = 100;
    while (true) {
        cout << e << " ";
        c += k;
        e--;
        if (clouds[c % n] == 1) e -= 2;
        if (c % n == 0) break;
    }
    cout << "\n";
    cout << e << "\n";
    
    return 0;
}