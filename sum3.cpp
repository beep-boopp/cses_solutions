#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n,x;
    cin>>n>>x;
    unordered_map<ll,ll> freq;
    freq.reserve(2 * n);
freq.max_load_factor(0.25);
    freq[0]=1;
    ll pre=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        pre+=a;
        ans+=freq[pre-x];
        freq[pre]++;
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}