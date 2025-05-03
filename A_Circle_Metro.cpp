#include<bits/stdc++.h>
#define ll long long int
#define ci cin 
#define co cout
#define sanjoy int main
#define fun void solved
#define w while
using namespace std;
sanjoy(){
    ll n, a,x,b,y; ci>>n>>a>>x>>b>>y;
    a--,x--,b--,y--;
    while(true){
        if(a==b){
            co<<"YES"<<endl;
            return 0;
        }
            if(a==x || b==y){
                break;
            }
            a =(a+1)%n;
            b=(b-1+n)%n;     
    }
    co<<"NO"<<endl;
    
}