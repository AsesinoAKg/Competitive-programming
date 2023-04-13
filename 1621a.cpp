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
        int n, k;
        cin >> n >> k;
        int d = n / 2;

        if (n % 2 == 0)
        {
            if (k > d)
            {
                cout << "-1" << endl;
            }
            else
            {
                ll curri = 1, currj = 1;
                ll req = k;
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (i == curri && j == currj && req > 0)
                        {
                            cout << "R";
                            curri += 2;
                            currj += 2;
                            req--;
                        }
                        else
                            cout << ".";
                    }
                    cout<<endl;
                }
            }
        }
        else
        {
            if (k > (d+1))
            {
                cout << "-1" << endl;
            }
            else
            {
                ll curri = 1, currj = 1;
                ll req = k;
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (i == curri && j == currj && req > 0)
                        {
                            cout << "R";
                            curri += 2;
                            currj += 2;
                            req--;
                        }
                        else
                            cout << ".";
                    }
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}
