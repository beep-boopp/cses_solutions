#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n,t;
    cin>>n>>t;
    vector<ll> time(n);
    ll fastest_time=1e18;   
    for(ll i=0;i<n;i++){
        cin>>time[i];
        fastest_time=min(fastest_time,time[i]);
    }
    sort(time.begin(),time.end());
    
    ll low=1;
    ll high=fastest_time*t;
    ll ans=high;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        ll prods=0;
        for(ll x:time)
        {
            prods+=mid/x;
            if(prods>=t) break;
        }
        if(prods>=t)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}