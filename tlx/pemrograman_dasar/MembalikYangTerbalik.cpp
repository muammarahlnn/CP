#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int res = 0;
    while (n > 0) {
        res = (res * 10) + (n % 10);
        n /= 10;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << reverse((reverse(a) + reverse(b))) << "\n";


    return 0;
}