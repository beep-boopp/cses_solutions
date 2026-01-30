#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin>>n;
    vector<ll> dp(n+1, 1e9);
    dp[0]=0;
    //dp[n] number of ways to reduce n to 0
    for(ll i =1;i<=n;i++)
    {
        string s=to_string(i);
        for(auto c:s)
        {
            ll digit=c-'0';
            if(digit!=0)
            {
                dp[i]=min(dp[i],dp[i-digit]+1);
            }
        }
    }
    cout<<dp[n]<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}