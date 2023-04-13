/* // shree ganeshay namah
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

ll gcd(int ak, int ag)
{
    if (ag == 0)
        return ak;
    return gcd(ag, ak % ag);
}
ll lcm(int ak, int ag)
{
    return (ak / gcd(ak, ag)) * ag;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        int c = 0;
        if (m == n)
        {
            cout << n << endl;
            c = 1;
        }
        if (c == 0)
        {
            if (lcm(m, n) - (m + n) >= 0)
                cout << lcm(m, n) - (m + n) << endl;
            else
                cout << lcm(m, n) - (m + n) + max(m, n) << endl;
        }
    }
    return 0;
}
 */
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	    }
	    int res = arr[0];
	    for(int i=1; i<n; i++){
	        int j = min(i+arr[i],n);
	        if(i>=arr[i-1] && i<=j){
	            res = res|arr[i];
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}