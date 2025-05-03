#include <bits/stdc++.h>
#define ll long long int
#define ci cin 
#define co cout
#define sanjoy int main
#define Hoo cout<<"YES";
#define fun void solved
#define w while
using namespace std;
 
sanjoy(){
        int t; ci>>t; w(t--){
            int n; ci>>n;
            int sum=0,ans=0;
            for(int i=0; i<n; i++){
                int a; ci>>a;
                sum+= a;
                ans = sum-n;
            }
            if(sum>=n){
              cout<<abs(ans)<<endl;
            }
            else{
                cout<<1<<endl;
            }

        }

        }