// shree ganeshay namah
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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int c = 0, c1 = 0, s = 0;
        cin >> n;
        // unordered_map<int,int> mp;
        vector<char> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 'Q')
                if(c<0)
                c1++;
                else
                c++;
            else
                c--;
        }
        for (int i = 0; i < n; i++)
        {
            if(c1>0){
                cout<<"NO"<<endl;
                break;
            }
            else if (c > c1)
            {
                cout << "NO" << endl;
                break;
            }
            else if (a[n - 1] == 'A')
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        /* cout<<c<<s;
        if(c<0)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl; */
    }
    return 0;
}
