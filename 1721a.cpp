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
        char a,b,c,d;
        int q=0;
        cin>>a>>b>>c>>d;
        if(a!=d)
        q++;
        if(b!=d)
        q++;
        if(c!=d)
        q++;
        if(a==b)
        q--;
        if(b==c)
        q--;
        if(a==c)
        q--;
        if(a!=d & a!=b & b==c)
        q++;
        if(a==b & a==c & a!=d)
        q+=2;
       if(q<0)
       cout<<0<<endl;
       else
       cout<<q<<endl;
continue;
    }
    return 0;
}
