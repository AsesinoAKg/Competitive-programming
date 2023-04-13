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
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i+=2){
        for(int j=0;j<l-i-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
