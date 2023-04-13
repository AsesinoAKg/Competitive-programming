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
        vector<int> a(n);
        vector<int> b(n);
        int c=0, c1=0, z=0 ,z1=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 1){
                c++;
            }
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            if(b[i] == 1){
                c1++;
            }
        }
        if(c == c1){
            for (int i = 0; i < n; i++)
            {
                if(a[i] != b[i]){
                    z1++;
                }
                
            }
            if(z1>0)
                cout<<"1"<<endl;
                else
                cout<<"0"<<endl;
        }
        else{
            int ans = abs(c-c1);
            for (int i = 0; i < n; i++)
            {
                if(a[i] != b[i]){
                    z++;
                }
            }
            if(z>ans){
                cout<<ans+1<<endl;
            }
            else{
            cout<<ans<<endl;   
            }         
        }
        
    }
    return 0;
}
