#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i =0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll cur_sum=0;
    for(ll i =0;i<n;i++)
    {
        if(a[i]>cur_sum+1)
        {
           cout<<cur_sum+1<<endl;
           return;
        }
         cur_sum+=a[i];
    }
    cout<<cur_sum+1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
    return 0;
}