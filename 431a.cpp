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
    int a,s1,d,f;
    cin>>a>>s1>>d>>f;

    char s[1000001];
    cin>>s;
    int ans = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]=='1')
        ans = a+ans;
        else if(s[i]=='2')
        ans = s1+ans;
        else if(s[i]=='3')
        ans = d+ans;
        else if(s[i]=='4')
        ans = f+ans;
    }
    cout<<ans<<endl;
    return 0;
}
