#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    for(ll i =0;i<n;i++) cin>>a[i];
    // a[i] desired apartment range a[i]-k to a[i]+k


    vector<ll> b(m); // size of apartments
    for(ll i =0;i<m;i++) cin>>b[i];

    //sort
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i=0,j=0;
    ll count=0;
    while(i<n && j<m)
    {
        if(b[j] < a[i]-k )
        {
            j++;
        }
        else if(b[j] > a[i]+k)
        {
            i++;
        }
        else
        {
            count++;
            i++;
            j++;
        }
    }
    cout<<count<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}