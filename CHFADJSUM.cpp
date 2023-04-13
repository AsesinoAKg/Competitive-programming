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
        map<int,int> mp1;
        mp1[-1]=0;
        int max=-1,ss=-1,c1=0,c2=0,t1;
        for (int i = 0; i < n; i++)
        {
            cin>>t1;
            mp1[t1]++;
            if(t1>max){
                c1=1;
                ss=max;
                max=t1;
            }
            else if(t1==max){
                c1++;
            }
            else if(t1>ss and t1<max){
                ss=t1;
            }
        }
        if(n==2){
            cout<<"NO"<<endl;
        }
        else{
            c2=mp1[ss];
            if(c2==n-1){
                cout<<"NO"<<endl;
            }
            else{
                if(n%2==0){
                if(c1<=(n/2))
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
                }
            else{
                if(c1<=(n/2)+1)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
    }
    }
    return 0;
}
