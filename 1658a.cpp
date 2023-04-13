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
        int n, c = 0, a1 = 0;
        cin >> n;
        string a;
        cin >> a;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == '0' && a[i + 1] == '0')
                c += 2;
            if (a[i] == '0' && a[i + 1] == '1' && a[i + 2] == '0')
                c += 1;
        }
        cout << c << endl;
    }
    return 0;
}