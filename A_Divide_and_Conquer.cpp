#include <bits/stdc++.h>
#define ll long long int
#define ci cin 
#define co cout
#define joy_ma_shoroshoti int main
#define Hoo cout<<"YES";
#define fun void solved
#define w while
using namespace std;
 
joy_ma_shoroshoti(){
        int tt=1; ci>>tt; w(tt--){
            ll n; cin>>n; 
            ll sum=0,ans=21;
            vector<ll>a(n);
            for(int i=0; i<n; i++){
                cin>>a[i];
                sum+=a[i];
            }
            if(sum%2!=0){
                for(int i=0; i<n; i++){
                    ll as=a[i],cnt=0;
                    while(!((as+a[i])&1)){
                        cnt++;
                        as/=2;
                    }
                    ans=min(ans,cnt);
                }
            }
            else{
                ans=0;
            }
            cout<<ans<<endl;
        }

        }