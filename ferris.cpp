#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i =0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());

    ll count=0;
    ll i=0;
   ll l=0;
   ll r=n-1;
   ll count_of_pair=0;
   ll count_unpaired=0;
    while(l<=r)
    {
        if(a[l]+a[r]<=x)
        {
            count_of_pair++;
            l++;
            r--;
        }
        else
        {
            count++;
            r--;

        }
        
        
    }
    count+=count_of_pair;
    cout<<count<<"\n";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
    return 0;
}