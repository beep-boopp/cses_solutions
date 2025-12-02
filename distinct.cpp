#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i =0;i<n;i++)
    {
        cin>>arr[i];
    }
   sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    ll distinct_count = last - arr.begin();
    cout << distinct_count << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}