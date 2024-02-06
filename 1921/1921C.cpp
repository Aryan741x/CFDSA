#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
void solve(){
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n+1);
    v[0]=0;
    for(int i=1;i<=n;++i){
        cin>>v[i];
    }
    ll sum=0;
    for(int i=1;i<=n;++i){
       if(((v[i]-v[i-1])*a)>b){
        sum+=b;
       }
       else{
        sum+=(v[i]-v[i-1])*a;
       }
    }
    if(f-sum>0){
            cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
