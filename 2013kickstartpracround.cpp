#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++){
            getline(cin,s[i]);
        }
        for(int i=0; i<n; i++){
            if(s[i]>s[i+1]){
                cout<<s[i]<<" "<<s[i+1];
            }
        }
    }
}