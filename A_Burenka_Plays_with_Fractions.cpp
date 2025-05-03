#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
void solved(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = a * d, y = b * c;
    if (x == y)
        cout << "0\n";
    else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
        cout << "1\n";
    else
        cout << "2\n";
}
joy_ma_soroshoti(){
     int tt; cin >> tt;
    while (tt--){
        solved();
    }
}
