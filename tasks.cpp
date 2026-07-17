#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> task(n);
    for(ll i=0;i<n;i++)
    {
        cin>>task[i].first>>task[i].second;
        //duration and deadline
    }
    ll sum_deadline=0;
   
    sort(task.begin(),task.end());
    ll sum=0;
    ll real=0;
     for(auto &x:task)
    {
        sum_deadline+=x.second;
        sum+=x.first;
        real+=sum;
    }
    ll ans=sum_deadline-real;
    cout<<ans<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}