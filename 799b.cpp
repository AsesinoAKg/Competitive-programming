// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<int> a(t),b(t),c(t);
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    for(int i=0; i<t; i++){
        cin>>b[i];
    }
    for(int i=0; i<t; i++){
        cin>>c[i];
    }
    
    /* int a1=INT_MAX,a2=INT_MAX;
    for(int i=0; i<m; i++){
        int as=s[i];
        for(int i=0; i<t; i++){
            if(as==b[i]){
                if(a[i]>a1)
                continue;
                else
                a1 = a[i];
            }
            if(as==c[i]){
                if(a[i]>a2)
                continue;
                else
                a2 = a[i];
            }
        }
        cout<<min(a1,a2)<<" ";
    } */
    set<int> s[4];
    for (int i = 0; i < t; i++)
    {
        s[b[i]].insert(a[i]);
        s[c[i]].insert(a[i]);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int col,price=0;
        cin>>col;
        price = *s[col].begin();
        for (int i = 0; i <= 3; i++)
        {
            s[i].erase(price);
        }
        if(price)
        cout<<price;
        else
        cout<<-1<<endl;
        
    }
    return 0;
}