#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{


    ll n,m;
    cin>>n>>m;
    multiset<ll> tickets;
    ll x;
    for(ll i =0;i<n;i++)
    {
        cin>>x;
        tickets.insert(x);
    }
    for(int i =0;i<m;i++)
    {
        cin>>x;
        auto it=tickets.upper_bound(x);
        if(it==tickets.begin())
        {
            cout<<-1<<"\n";
        }
        else{
            it--;
            cout<<*it<<"\n";
            tickets.erase(it);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}