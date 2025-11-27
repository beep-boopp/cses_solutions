#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;

    // for n=3 not possible check it out urself
    // afterwords just print even numbers first and then odd numbers
    if(n<=3 && n!=1)
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    else{
        if(n==1)
        {
            cout<<1<<"\n";
            return;
        }
       
        for(ll i =2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
         for(ll i =1 ; i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    return 0;
}