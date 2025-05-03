#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define ll long long
#define ci cin
using namespace std;
joy_ma_soroshoti(){
    ll t; ci>>t;
    while (t--) {
        ll n, k;
        ci >> n >> k;
        if (n%2 && k%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
