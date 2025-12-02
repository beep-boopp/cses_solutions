#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    //exponent 2^n
    cin >> n;
    ll size = (ll)pow(2, n);
    ll ans=size%1000000007;
    cout<<ans<<"\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    return 0;
}