#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); 

    int n; cin >> n;
    int plus = 0, minus = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if (temp > 0) plus++;
        else if (temp < 0) minus++;
        else zero++;
    }
    printf("%.6f\n", (double) plus / n);
    printf("%.6f\n", (double) minus / n);
    printf("%.6f\n", (double) zero / n);

    return 0;
}