#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l=0;
    ll r=0;
    ll sum=0;
    ll count=0;
    for(r=0;r<n;r++)
    {
        sum+=a[r];
        while(sum>x)
        {
            sum-=a[l];
            l++;
        }
        if(sum==x)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}