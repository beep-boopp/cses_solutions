#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
void solve()
{
  ll n,x;
  cin>>n>>x;
    vector<ll> c(n);
    for(ll i =0;i<n;i++)
    {
        cin>>c[i];
    }
  vector<ll> dp(x+1,0);
  dp[0]=1;

    for(ll coin:c)
    {
        for(ll sum=coin;sum<=x;sum++)
        {
            dp[sum]=(dp[sum]+dp[sum-coin])%MOD;
        }
    }
    cout<<dp[x]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}