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
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        vector<long long>b(n);
        long long z = 1e18, x = 1e18;
        for(int i=0; i<n; i++){
            cin>>a[i],z = min(z,a[i]);
        }
        for(int i=0; i<n; i++){
            cin>>b[i],x = min(x,b[i]);
        }
       // int z = *min(a.begin(), a.end());
       // int x = *min(b.begin(), b.end());
        ll ans=0;
		for(int i=0; i<n; i++){
			ans+=max(a[i]-z, b[i]-x);
		//cout << ans << "\n";
        }
        cout << ans << "\n";
    }
    return 0;
}
