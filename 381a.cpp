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
    int n, i, a = 0, b = 0, j;
    int *p, *q;
    cin >> n;
    int aa[n + 10];
    for (i = 0; i < n; i++)
    {
        cin >> aa[i];
    }
    i = 0;
    j = n - 1;
    p = &aa[0];
    q = &aa[n - 1];
    for (int k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            if (*p > *q)
            {
                a += *p;
                i++;
                p = &aa[i];
            }
            else
            {
                a += *q;
                j--;
                q = &aa[j];
            }
        }
        else
        {
            if (*p > *q)
            {
                b += *p;
                i++;
                p = &aa[i];
            }
            else
            {
                b += *q;
                j--;
                q = &aa[j];
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
