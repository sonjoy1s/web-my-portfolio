#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
joy_ma_soroshoti(){
  ll tt; ci>>tt; while(tt--){
    ll a,b,n,turn; cin>>a>>b>>n; ll total=0;
    if(a>b){
        turn=1;
    }
    else{
        turn=0;
    }
    while(a<=n && b<=n){
        if(turn%2==0){
            a+=b;
            turn++;
            total++;
        }
        else{
            b+=a;
            turn++;
            total++;
        }
    }
    cout<<total<<endl;

  }
    return 0;
}
