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
    //find median length of sticks
    sort(a.begin(), a.end());
    ll median;
    median = a[n/2];
   
    ll cost=0;
    for(ll i =0;i<n;i++)
    {
        cost+=abs(a[i]-median);
    }
    cout<<cost<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

   solve();
    return 0;
}