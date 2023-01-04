#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Woeful Permutation

void solve(int tt) {
    int n;
	cin >> n;
	if(n & 1)
		cout << 1 << " ";

	for(int i = n & 1; i < n; i += 2)
		cout << i+2 << " " << i+1 << " ";
	cout << "\n";
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
