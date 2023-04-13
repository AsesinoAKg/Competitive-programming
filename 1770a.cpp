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
        int n,m;
        int suma1=0,nm,sum11=0,sum12=0;
        vector<int> a(n);
        vector<int> a1(m);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>a1[i];
            suma1 = suma1 + a1[i];
        }
        if(n>m){
            int nm = n-m;
            for (int i = n; i < nm; i++)
            {
                sum11 = sum11 + a[i];
            }
            cout<<sum11+suma1<<endl;
        }
        else if(n<m){
            for (int i = 0; i < n; i++)
            {
                sum12 = sum12 + a1[i];
            }
            cout<<sum12<<endl;
        }
    }
    return 0;
}
