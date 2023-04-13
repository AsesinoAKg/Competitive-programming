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

int anurag(int s, int d){
    if(__gcd(s,d)==1)
    return 1;

    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> aa(n);
        for (int i = 0; i < n; i++)
        {
            cin>>aa[i];
        }
        int mohit = INT_MIN;
        for (int i = n-1; i >= 0; i--)
        {
            for (int j = i; j>0; j--)
            {
                if(anurag(aa[i],aa[j])){
                    mohit = max(mohit,i+j);
                }
            }
        }
        if(mohit == INT_MIN)
        cout<<-1<<endl;
        else
        cout<<mohit+2<<endl;
        
        
    }
    return 0;
}
