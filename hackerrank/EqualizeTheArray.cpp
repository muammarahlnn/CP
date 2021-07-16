#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> nums(101);
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        nums[temp]++;
    }

    // find modus
    int base = nums[1], modus = 1;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] > base) {
            base = nums[i];
            modus = i;
        } 
    }
    
    // find minimal deletions
    int ans = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (i != modus && nums[i] != 0)
            ans += nums[i];
    }
    cout << ans << "\n";

}