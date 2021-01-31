#include <bits/stdc++.h>
using namespace std;

int a, b;

int fx(int x) {
    return abs(a * x + b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int  k, x;
    cin >> a >> b >> k >> x;
    
    while (k--) {
        x = fx(x);
    }
    cout << x;

    return 0;
}