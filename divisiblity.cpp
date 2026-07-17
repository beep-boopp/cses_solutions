#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    map<ll, ll> freq;
    freq[0] = 1;

    ll prefix = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        prefix += x;

        ll mod = ((prefix % n) + n) % n;

        ans += freq[mod];
        freq[mod]++;
    }

    cout << ans << "\n";

    return 0;
}