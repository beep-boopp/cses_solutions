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
        //max
        ll cur_sum=a[0];
        ll max_sum=a[0];
        for(ll i =1;i<n;i++)
        {
            cur_sum=max(a[i], cur_sum+a[i]);
            max_sum=max(max_sum,cur_sum);
           
        }
        cout<<max_sum<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}