#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;

    if (sum % 2) {
        cout << "NO\n";
        return;
    }

    ll target = sum / 2;
    vector<ll> v1, v2;
    ll current_sum = 0;

    for (ll i = n; i >= 1; i--) {
        if (current_sum + i <= target) {
            v1.push_back(i);
            current_sum += i;
        } else {
            v2.push_back(i);
        }
    }

    cout << "YES\n";
    cout << v1.size() << "\n";
    for (ll x : v1) cout << x << " ";
    cout << "\n";
    cout << v2.size() << "\n";
    for (ll x : v2) cout << x << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
