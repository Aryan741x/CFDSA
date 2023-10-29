#include<iostream>
using namespace std;
using ll=long long;
ll Cinnabon(ll n){
    ll sum=(n*4)+(n-1);
    n=n-2;
    sum+=2*((n*(n+1))/2);
    return sum+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<Cinnabon(n)<<endl;
    }
    return 0;
}
