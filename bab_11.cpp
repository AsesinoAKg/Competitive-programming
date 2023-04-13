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
        vector<ll> psa,nga;
        int temp;
        int mxa=INT_MIN;
        int mna=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp>=0){
                psa.push_back(temp);
                mna=min(mna,temp);
            }
            else{
                nga.push_back(temp);
                mxa=max(mxa,temp);
            }
        }
        if(mxa==0 || mna==0)
        cout<<"-1"<<endl;
        else if(mxa==INT_MIN){
            cout<<mna-1<<endl;
        }
        else if(mna==INT_MAX){
            cout<<abs(mxa+1)<<endl;
        }
        else{
            cout<<min(mna, abs(mxa))-1<<endl;
        }
    }
    return 0;
}
