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
        int a1, s1, a2, s2, d1, d2;
        cin >> a1 >> s1;
        cin >> a2 >> s2;
        int ak = s1 + s2;
        while (ak--)
        {

            while (s1--)
            {
                d1 = a1 * 10;
            }
            while (s2--)
            {
                d2 = a2 * 10;
            }
        }
        cout << d1 << d2;
        if (d1 > d2)
            cout << ">" << endl;
        else if (d1 < d2)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}
