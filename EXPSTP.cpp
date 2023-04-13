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


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,x1,y1;
        cin>>n>>x>>y>>x1>>y1;
        int ax=abs(x-x1);
        int ay=abs(y-y1);
        int axy= ax+ay;

        int ax1=abs(n-x1+1);
        int ay1=abs(n-y1+1);
        int max1=min(ax1,x1);
        int may1=min(ay1,y1);
        int mmin=min(max1,may1);

        int ax11=abs(n-x+1);
        int ay11=abs(n-y+1);
        int max11=min(ax11,x);
        int may11=min(ay11,y);
        int mmin1=min(max11,may11);

        int ax1y1=mmin+mmin1;

        cout<<min(axy,ax1y1)<<endl;
    }
    return 0;
}
