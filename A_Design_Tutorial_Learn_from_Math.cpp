#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
#define co cout
using namespace std;
joy_ma_soroshoti(){
     ll n; cin>>n;
     if(n%2!=0){
        cout<<9<<" "<<n-9;
     }
     else{
        co<<4<<" "<<n-4;
     }
   return 0;
}