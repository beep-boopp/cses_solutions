#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n,x;
    cin>>n>>x;

    vector<ll> c(n);
    for(ll i =0;i<n;i++)
    {
        cin>>c[i];
    }
    vector<ll> dp(x+1,1e9);

    //i goes from 1 to n
    //j goes from 0 to n-1
    dp[0]=0;
    for(ll i =1;i<=x;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(c[j]<=i)
            {
            dp[i]=min(dp[i],dp[i-c[j]]+1);
            }
        }
    }
    cout<<(dp[x]<1e9? dp[x]:-1)<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve(); 
    return 0;
}