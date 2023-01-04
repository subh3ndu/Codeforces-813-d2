#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;

// C. Sort Zero

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    map<int, int> mp;
    for(auto x : a) 
        mp[x]++;

    for(int i = n - 1; i >= 0; i--) {
        while(i > 0 && a[i] == a[i-1]) {
            mp[a[i]]--;
            i--;
        }
        mp[a[i]]--;
        if(mp[a[i]] == 0) mp.erase(a[i]);
        if(mp.count(a[i])) {
            cout << mp.size() << "\n";
            return ;
        }
        if(i > 0 && a[i-1] > a[i]) {
            cout << mp.size() << "\n";
            return ;
        }
    }
    cout << 0 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

