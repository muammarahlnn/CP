#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int s, t, a, b, m , n;
    cin >> s >> t >> a >> b >> m >> n;
    int apple = 0;
    for (int i = 0; i < m; i++) {
        int temp; cin >> temp;
        temp += a;
        if (temp >= s && temp <= t) apple++;
        
    }

    int orange = 0;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        temp += b;
        if (temp >= s && temp <= t) orange++;
    }
    cout << apple << "\n" << orange << "\n";

    return 0;
}