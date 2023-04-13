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
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int n = s1.length();
        int m = s2.length();
        //cout<<n<<m<<endl;
            if((s1 == s2) && n == m)
            cout<<"="<<endl;
            else if((s1[n-1] == 'S' && s2[m-1] == 'S') && n>m)
            cout<<"<"<<endl;
            else if((s1[n-1] == 'S' && s2[m-1] == 'S') && n<m)
            cout<<">"<<endl;
            else if((s1[n-1] == 'M' && s2[m-1] == 'M') && n>m)
            cout<<">"<<endl;
            else if((s1[n-1] == 'M' && s2[m-1] == 'M') && n<m)
            cout<<"<"<<endl;
            else if((s1[n-1] == 'L' && s2[m-1] == 'L') && n>m)
            cout<<">"<<endl;
            else if((s1[n-1] == 'L' && s2[m-1] == 'L') && n<m)
            cout<<"<"<<endl;
            else if(s1[n-1] == 'S' && s2[m-1] == 'M')
            cout<<"<"<<endl;
            else if(s1[n-1] == 'S' && s2[m-1] == 'L')
            cout<<"<"<<endl;
            else if(s1[n-1] == 'M' && s2[m-1] == 'L')
            cout<<"<"<<endl;
            else if(s1[n-1] == 'M' && s2[m-1] == 'S')
            cout<<">"<<endl;
            else if(s1[n-1] == 'L' && s2[m-1] == 'S')
            cout<<">"<<endl;
            else if(s1[n-1] == 'L' && s2[m-1] == 'M')
            cout<<">"<<endl;
        
    }
    return 0;
}
