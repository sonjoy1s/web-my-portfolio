#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
joy_ma_soroshoti(){
    int t; cin>>t; while(t--)
    {
        int a[3]; cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if((a[0]+a[1]+a[2])%2!=0) cout<<-1<<endl;
        else if((a[0]+a[1])<a[2]) cout<<a[0]+a[1]<<endl;
        else cout<<(a[0]+a[1]+a[2])/2<<endl;
}
return 0;
}