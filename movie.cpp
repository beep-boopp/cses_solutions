#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll,ll>> movie;
    movie.reserve(n);

    for(ll i = 0; i < n; i++)
    {
        ll start, end;
        cin >> start >> end;
        movie.push_back({start, end});
    }

    
    sort(movie.begin(), movie.end(),
        [](auto &a, auto &b){ return a.second < b.second; });

    ll ans = 0;
    ll last_end = 0;

    for(auto &m : movie)
    {
        if(m.first >= last_end)
        {
            ans++;
            last_end = m.second;
        }
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
