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
        vector<int>anco(n);
        int puraxor=0;
        for (int i = 0; i < n; i++)
        {
            cin>>anco[i];
            puraxor ^= anco[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
            int newval = anco[0] ^ puraxor;
            for (int i = 1; i < n-1; i++)
            {
                anco[i] ^= newval;
                newval = anco[i] ^ puraxor;
            }
            if(anco[n-1] != anco[n-2]){
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
            
        }
    }
    return 0;
}