#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> dp(n+1);
    dp[0]=1;

    for(ll i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(j<=i)
            {
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }
cout<<dp[n]<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}