#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Wonderful Permutation

void solve(int tt) {
    int n, k, s = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        s += (i <= k && x > k);
    }
    cout << s << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    for(int i = 1; i <= tt; i++) {
        solve(tt);
    }

    return 0;
}
