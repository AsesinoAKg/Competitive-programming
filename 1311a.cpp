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
        int a,b;
        cin>>a>>b;
        if(b>a)
        {
            if((b-a)%2!=0)
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<2<<endl;
                continue;
            }
        } 
        else if(b==a)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            if((a-b)%2!=0)
            {
                cout<<2<<endl;
                continue;
            }
            else cout<<1<<endl;
            continue;
        }
    }
    return 0;
}
