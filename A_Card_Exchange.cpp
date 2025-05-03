#include <bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
using namespace std;
void solved(){
    int n,k; cin>>n>>k; 
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int>cnt(101,0);
    for(int num : a){
        cnt[num]++;
    }
    int maxExchange=0;
    for(int i=1; i<=100; i++){
        if(cnt[i]>0){
            int exchange = cnt[i]/(k-1);
            maxExchange = max(maxExchange , exchange);
        }
    }
    int mincr = n-maxExchange*k;
    cout<<mincr<<endl;
}
joy_ma_soroshoti(){
     int tt; cin >> tt;
    while (tt--){
        solved();
    }
}
