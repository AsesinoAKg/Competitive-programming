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
        int n,c=0,c1=0;
        cin>>n;
        vector<char> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(n==1){
                cout<<"YES"<<endl;
                c++;
                break;
            }
            else if(n==2){
                cout<<"NO"<<endl;
                c++;
                break;
            }
            else if((a[i]==a[i+1]) && (a[i+1]==a[i+2])){
            cout<<"NO"<<endl;
            c++;
            break;
            }
            else if(a[i]!=a[i+1]){
            c1++;
            }
        }
        cout<<"c "<<c<<" c1 "<<c1<<endl;
        if(c1 == (n/2))
        cout<<"YES"<<endl;
        else if(c1 != (n/2))
        cout<<"NO"<<endl;
        else if(c==0)
        cout<<"YES"<<endl;
        
    }
    return 0;
}
