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
        ll n,k;
       cin>>n>>k;
       int arr1[n],arr2[n];
       for(int i=0;i<n;i++){
           cin>>arr1[i];
       }
       for(int i=0;i<n;i++){
           cin>>arr2[i];
       }
       sort(arr1,arr1+n);
       sort(arr2,arr2+n,greater<int>());
        for(int i=0;i<k;i++){
            if(arr1[i]<arr2[i]){
                int a=arr2[i];
                arr2[i]=arr1[i];
                arr1[i]=a;
            }
        }
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr1[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
