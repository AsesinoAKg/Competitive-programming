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
    ll n,x1,x2,y1,y2;
    cin>>n>>x1>>y1>>x2>>y2;

    ll x = min(x1, n-x1+1);
    ll y = min(y1, n-y1+1);
    ll ak = min(x,y);

    ll a = min(x2, n-x2+1);
    ll b = min(y2, n-y2+1);
    ll ag = min(a,b);

    cout<<abs(ak-ag)<<endl;


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
