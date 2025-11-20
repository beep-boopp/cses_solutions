#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll> numbers;
    ll sum=0;
    for(int i=1;i<n;i++)
    {
       ll x;
         cin>>x;
            numbers.push_back(x);
            sum+=x;


    }
    ll sum1 = (n*(n+1))/2;
    ll ans=sum1-sum;
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
   t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}