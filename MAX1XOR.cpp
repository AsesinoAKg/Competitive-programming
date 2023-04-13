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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int akg1[n],akg2[n];
        int c1=1,c2=0;
        akg1[0]=1;
        akg2[0]=0;
        for (int i = 1; i < n; i++)
        {
            akg1[i]=akg1[i-1]^(s[i-1]-48);
            if(akg1[i]==1){
                c1++;
            }
            akg2[i]=akg2[i-1]^(s[i-1]-48);
            if(akg2[i]==1){
                c2++;
            }
        }
        cout<<(c2>c1?c2:c1)<<endl;
    }
    return 0;
}
