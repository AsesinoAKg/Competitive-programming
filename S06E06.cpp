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
        string s;
        int ll k;
        cin>>s>>k;
        sort(s.begin(), s.end());
        ll sttt=1;
        while (k>=1&&s[0]!='9')
        {
            for(int i = 0; i<((int)s.size()); i++){
                if(k<1)
                break;
                while (s[i]<(sttt+'0')&&k>=1)
                {
                    s[i] = s[i] + 1;
                    k-=1;
                }
                
            }
            sttt++;
        }
        ll anurag = 1;
        for(int i=0; i<((int)s.size()); i++){
            anurag *= (s[i]-'0');
        }
        cout<<anurag<<endl;

    }
    return 0;
}
