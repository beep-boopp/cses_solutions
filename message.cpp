#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n,m;
    cin>>n>>m;
    //go from 1 to n
    vector<vector<ll>> adj(n+1);
    for(int i =0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //for bfs ds
    vector<bool> vis(n+1,false);
    vector<ll> parent(n+1,-1);
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        if(node==n)
        {
            break;
        }
        for(int next:adj[node])
        {
            if(!vis[next])
            {
                vis[next]=true;
                parent[next]=node;
                q.push(next);
            }
        }
    }
    if(!vis[n])
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    //reconstruct
    vector<ll> path;
    int cur=n;
    while(cur!=-1)
    {
        path.push_back(cur);
        cur=parent[cur];
    }
    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(int x:path)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}