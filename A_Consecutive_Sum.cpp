#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
joy_ma_soroshoti(){
    int t; cin>>t; while (t--)
    {
        ll n,k,sum=0; cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++){
             cin>>a[i];
             sum+=a[i];
        }
        cout<<sum<<endl;
    }
    
}