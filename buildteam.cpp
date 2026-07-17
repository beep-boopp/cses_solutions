#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    for(int i =0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> team(n+1,0);
    queue<int> q;
    for(int i =1;i<=n;i++)
    {
        if(team[i]!=0)
        {
            continue;
        }
        team[i]=1;
        q.push(i);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int next:adj[node])
            {
                if(team[next]==0)
                {
                    team[next]=3-team[node];
                    q.push(next);
                }
                else if(team[next]==team[node])
                {
                    cout<<"IMPOSSIBLE"<<endl;
                    return;
                }
            }
        }
    }
    for(int i =1;i<=n;i++)
    {
        cout<<team[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}