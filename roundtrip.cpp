#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n,m;
vector<vector<ll>> adj;
vector<ll> parent;
vector<bool> vis;
ll start=-1;
ll ending=-1;
bool dfs(ll node, ll par)
{
    vis[node]=true;
    for(ll next:adj[node])
    {
        if(next==par)
        {
            continue;
        }
        if(vis[next])
        {
            start=next;
            ending=node;
            return true;
        }
        else
        {
        parent[next]=node;
        if(dfs(next,node))
        {
            return true;
        }
    }
    }
    return false;
}
void solve() {
    
    cin>>n>>m;
    adj.assign(n + 1, {});
    vis.assign(n + 1, false);
    parent.assign(n + 1, -1);

    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

     for (ll i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;

        if (dfs(i, -1))
            break;
    }
    if(start==-1)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    vector<ll> cycle;
    cycle.push_back(start);
    ll cur=ending;
    while(cur!=start && cur!=-1)
    {
        cycle.push_back(cur);
        cur=parent[cur];
    }
    cycle.push_back(start);
    reverse(cycle.begin(), cycle.end());

    cout << cycle.size() << "\n";

    for (ll x : cycle)
        cout << x << " ";

    cout << "\n";
    



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}