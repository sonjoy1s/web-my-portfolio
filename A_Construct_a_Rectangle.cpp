#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
void solved(){
      vector<ll> l(3);
    for (int i = 0; i < 3; ++i)
      cin >> l[i];
    bool ok = false;
    for (int i = 0; i < 3; ++i)
      ok |= l[i] == l[(i + 1) % 3] + l[(i + 2) % 3];
    for (int i = 0; i < 3; ++i) if (l[i] % 2 == 0)
      ok |= l[(i + 1) % 3] == l[(i + 2) % 3];
    cout << (ok ? "YES\n" : "NO\n");
}
joy_ma_soroshoti(){
     int tt; cin >> tt;
    while (tt--){
        solved();
    }
}
