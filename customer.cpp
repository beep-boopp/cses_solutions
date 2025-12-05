#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> customers(n);
    for(ll i =0;i<n;i++)
    {
        ll arrival, departure;
        cin>>arrival>>departure;
        customers.push_back({arrival, +1});
        customers.push_back({departure+1, -1});
    }
    ll cur_max=0;
    ll ans=0;
    sort(customers.begin(), customers.end());
    for(auto &x: customers)
    {
        ll binary=x.second;
        cur_max+=binary;
        ans=max(ans, cur_max);
    }
    cout<<ans<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}