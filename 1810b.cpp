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
        if(n%2==0)
        cout<< -1 <<endl;
        else{
            ll ak = 40;
            vector<ll> akg;
            while (n != 1 && ak--)
            {
                if(((n+1)/2)%2){
                    n = (n+1)/2;
                    akg.push_back(1);
                }
                else{
                    n= (n-1)/2;
                    akg.push_back(2);
                }
            }
            if(ak<0)
            cout<< -1 <<endl;
            else if(n==1){
                cout<<akg.size()<<endl;
                reverse(all(akg));
                for(auto i: akg)
                cout<<i<<" ";
                cout<<endl;
            }
            else
            cout<< -1 <<endl;
        }
    }
    return 0;
}
