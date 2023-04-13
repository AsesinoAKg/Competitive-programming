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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, dis, ans;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if ((a == 1 && b > 2) || (b == 1 && a > 2))
            cout << "-1" ;
        else if (a == b || a + 1 == b)
        {
            cout << a + b - 2;
        }
        else
        {
            x = 2 * a + 1;
            dis = b - a - 1;
            if (dis % 2)
            {
                ans = x + (dis - 1) * 2 + 3;
            }
            else
            {
                ans = x + dis * 2;
            }
            cout << ans - 2;
        }

        cout << endl;
    }

    return 0;
}
