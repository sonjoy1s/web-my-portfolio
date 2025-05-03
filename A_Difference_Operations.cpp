#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
joy_ma_soroshoti(){
  ll tt; ci>>tt; while(tt--){
    ll n,a; cin>>n; ll sum=0;
    for(int i=0; i<n; i++){
        cin>>a;
        sum+=a;
    }
    if(sum%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

  }
    return 0;
}
