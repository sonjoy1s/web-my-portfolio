#include <bits/stdc++.h>
#define ll long long int
#define ci cin 
#define co cout
#define sanjoy int main
#define fun void solved
#define w while
using namespace std;

fun(){
	ll A,B,a,b,ans;
	cin>>A>>B;
	if(!A){
		cout<<0<<endl;
		return;
	}
	ll res=A+3;
	for(ll i=(B<2?2-B:0); i<res; ++i){
		b=B+i;
		a=A;
		ans=i;
		w(a){
			a/=b;
			++ans;
		}
		if(ans<res)res=ans;
	}
	cout<<res<<endl;
}

sanjoy(){
	int t; cin>>t;
	w(t--){
        solved();
    }
	return 0;
}