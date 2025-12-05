#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
   ll k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;

   ll num=0;
   for(int i=1;i=<d;i++){
        if(i%k==0 || i%l==0 || i%m==0 ||i%n==0){
            num++;
        }
   }

    cout<<num<<endl;
}

int main(){
    solve();
}
