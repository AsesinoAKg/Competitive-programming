//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define int long long
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

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp1;
    map<int,int>mpa;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp1[a[i]]++;
    }
    vector<int>a2(n+1,0);
    for (int i = n-1; i >= 0; i--)
    {
        a2[i]=a2[i+1];
        a2[i]=a2[i]+mp1[a[i]+1];
        a2[i]=a2[i]-mpa[a[i]-1];
        mp1[a[i]]--;
        mpa[a[i]]++;
    }
    
    int ansa=0;
    for (int i = 0; i < n; i++)
    {
        ansa=max(ansa,a2[i]);
    }
    cout<<ansa;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
