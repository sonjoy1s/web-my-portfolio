#include<bits/stdc++.h>
#define joy_ma_soroshoti int main
#define  fun solved void
#define ll long long
#define ci cin
#define co cout
using namespace std;
joy_ma_soroshoti(){
    int n; cin>>n; int cnt1=0, cnt2=0;
     string s; cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            cnt1++;
        }
        if(s[i]=='D'){
            cnt2++;
        }
    }
    if(cnt1>cnt2){
        cout<<"Anton"<<endl;
    }
   else if(cnt1<cnt2){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
