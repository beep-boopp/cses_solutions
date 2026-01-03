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

        //i goes from 1 to n
        //j goes from 0 to n-1
        dp[0]=1;
        for(ll i =1;i<=x;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(c[j]<=i)
                {
                dp[i] = (dp[i] + dp[i - c[j]]) % MOD;
                }
            }
        }
        cout<<(dp[x])<<endl;

    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
    solve(); 
        return 0;
    }