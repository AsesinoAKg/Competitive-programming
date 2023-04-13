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
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        int pas1;
        if (rb <= rd)
        {
            pas1 = rd - rb;
        }
        else
        {
            pas1 = 2 * n - rb - rd;
        }
        int pas2;
        if (cb <= cd)
        {
            pas2 = cd - cb;
        }
        else
        {
            pas2 = 2 * m - cb - cd;
        }
        cout << min(pas1, pas2) << endl;
    }
    return 0;
}
