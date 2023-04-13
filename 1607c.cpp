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
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,anurag=0;
        //ll z= 1e10;
        ll a[n];
        for(int i =0; i<n; i++){
            cin>>a[i];//,z = min(z,a[i]);
            //a[i] = a[i]-z;
        }
        sort(a,a+n);
        //sort(a,a+n);
        ll anu =a[0];
        for(int i =0; i<n; i++){
            a[i]=a[i] - anurag;
            anurag += a[i];
        }
        for(int i =0; i<n; i++){
           anu = max(anu,a[i]);
          // anu = max(z,a[i]);
        }
        cout<<anu<<endl;
    }
    return 0;
}
