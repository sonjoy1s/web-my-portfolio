#include<bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
#define co cout
using namespace std;
joy_ma_soroshoti(){
    int tt; ci>>tt; while(tt--){
      string a,b; ci>>a>>b;
      char tmp=a[0];
      a[0]=b[0];
      b[0]=tmp;
      co<<a<<" "<<b<<endl;
    }
    return 0;
}
