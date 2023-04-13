#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int flag=0;
        long long n1;
        cin>>n1;
        vector<int> a(n1);
        unordered_map<int,int> akg;
        for (int i = 0; i < n1; i++)
        {
            cin>>a[i];
            akg[a[i]]++;
        }
        if(akg.size() == n1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
