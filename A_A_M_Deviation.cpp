#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
joy_ma_soroshoti(){
  ll tt; ci>>tt; while(tt--){
    ll a1,a2,a3; cin>>a1>>a2>>a3;
    ll ans = abs(a1+a3-2*a2);
    if(ans%3==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
  }
    return 0;
}
