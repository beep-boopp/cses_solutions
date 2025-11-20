#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n > 1)  // Changed condition
    {   
        if((n&1)==0)
        {
            n=n/2;
        }
        else{
            n=3*n+1;  // Maybe you meant +1, not +3?
        }
        cout<<n<<" ";
    }
    cout<<endl;  // Add newline
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