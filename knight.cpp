#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    cout<<"0\n";
    for(ll i =2;i<=n;i++)
    {
       
        ll n=i;
        ll i2=i*i;
        ll ans=(i2*(i2-1))/2 -(4*(n-2)*(n-1));
        cout<<ans<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    return 0;
}