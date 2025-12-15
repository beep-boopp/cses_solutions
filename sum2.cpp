#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);  
    for(ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }
    
    sort(a.begin(), a.end());  
    
    ll left = 0, right = n - 1;
    while(left < right)
    {
        ll sum = a[left].first + a[right].first;
        if(sum == x) {
            cout << a[left].second << " " << a[right].second << endl;
            return;
        }
        else if(sum < x) left++;
        else right--;
    }
    
    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
    return 0;
}