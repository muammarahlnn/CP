#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, k; cin >> n >> k;
    int bill = 0;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if (i == k) continue;
        bill += temp;
    }
    int charge; cin >> charge;

    if (bill / 2 == charge) cout << "Bon Appetit" << "\n";
    else cout << charge - bill / 2 << "\n";


    return 0;
}