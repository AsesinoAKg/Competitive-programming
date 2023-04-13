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
    int t,c=0,d=0,c1=0,d1=0,yes=0,no=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n ;
        ll i, a[n], negative = 0, positive = 0;
        for(i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < 0){
                a[i]*=-1;
                negative++;
            }
            else positive++;
        }
 
        bool no = false;
        for(i = n-2; i >= 0; i--){
            if(positive > 1){
                if(a[i] > a[i+1]){
                    no = true;
                    break;
                }
                positive--;
            }
        }
 
        for(i = 1; i < n; i++){
            if(negative > 1){
                if(a[i] > a[i-1]){
                    no = true;
                    break;
                }
                negative--;
            }
        }
 
        if(no) cout<<"NO";
        else cout<<"YES";
 
        cout<<endl;
    }
    return 0;
}
