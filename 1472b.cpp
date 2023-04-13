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
        int n, ans = 0, a1 = 0, s = 0, ak, i;
        cin >> n;
        // vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> ak;
            if (ak == 1)
                a1++;
            else
                s++;
        }
        if (a1 == 1 && s == 1)
            cout << "NO" << endl;
        else if (a1 == 0 && s == 2)
            cout << "YES" << endl;
        else if (a1 == 2 && s == 0)
            cout << "YES" << endl;
        else if ((a1 == s) || (a1%2==0 && s%2==0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
