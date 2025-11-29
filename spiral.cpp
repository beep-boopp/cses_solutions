#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
 ll row,col;
    cin>>row>>col;
    ll layer=max(row,col);
    if(layer%2==1)
    {
        swap(row,col);
    }
    if(col==layer)
    {
        cout<<(layer-1)*(layer-1)+row<<"\n";
    }
    else
    {
        cout<<(layer*layer)-(col-1)<<"\n";
    }



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
    
}