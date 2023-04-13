//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


void solve()
{
    ll x1,y1,x2,y2,r,c;
    cin>>r>>c;
    cin>>x1>>y1>>x2>>y2;
    ll cp;
    ll d1 = abs(x1-x2)+abs(y1-y2);
    if( r == 1 && c==1)
    cp = 0;
    else if(d1 == 1)
    cp = 0 ;
    else if(r == 1 || c==1)
    cp = 1;
    else if((x1 == 1 && y1 ==1) || (x2 == 1 && y2 == 1) || (x1 == 1 && y1 == c) || (x2 == 1 && y2 == c) || (x1 == r && y1 == 1) || (x2 == r && y2 == 1) || (x1 == r && y1 == c) || (x2 == r && y2 == c))
     cp=2;
    else if(x1 == 1 || x2 == r || x2 == 1 || x2 == r ||y1 == 1 || y1 == c || y2 == 1|| y2 == c)
     cp = 3;
    else
     cp = 4;

    ll ans = min(r,c);
    cout<<min(cp,ans)<<endl;
    cout<<cp<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
