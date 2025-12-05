#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> ticket_prices(n);
    for(ll i =0;i<n;i++) cin>>ticket_prices[i];
    vector<ll> customer_offers(m);
    for(ll i =0;i<m;i++) cin>>customer_offers[i];

    //binary search to place customer_offer to right of ticket_price that it can buy
    //if cant be placed at right return -1
    sort(ticket_prices.begin(), ticket_prices.end());
    //binary search
    
    for(ll i =0;i<m;i++)
    {
        ll offer=customer_offers[i];
        ll left=0;
        ll right=n-1;
        ll ans=-1;
        while(left<=right)
        {
            ll mid=left+(right-left)/2;
           if(ticket_prices[mid]<=offer)
           {
                ans=mid;
                left=mid+1;
              }
              else
              {
                right=mid-1;
              }
           }
           if(ans==-1)
           {
            cout<<-1<<"\n";
           }
           else
           {
            cout<<ticket_prices[ans]<<"\n";
            ticket_prices.erase(ticket_prices.begin()+ans);


        }
    

    };
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}