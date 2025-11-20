#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin>>s;
    ll max_count=0;
    ll count=1;
    for(ll i=0;i<s.length()-1;i++)
    {   
        if(s[i]==s[i+1])
        {
            count++;
        }
        else{
            max_count=max(max_count,count);
            count=1;
        }
    }
     max_count = max(max_count, count);
    cout<<max_count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}