#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        priority_queue<ll>pq;
        priority_queue<ll>pq1;
        if(s==2){
            ll a1,a2;
            cin>>a1>>a2;
            cout<<a1*a2<<endl;
        }
        else{
        for(int i=0;i<s;++i){
            ll a;
            cin>>a;
            if(a>0){
                pq.push(a);
            }
            else{
                pq1.push(-a);
            }
        }
        ll z1=0;
        ll z2=0;
        if(pq.size()>=2){
            z1=pq.top();
            pq.pop();
            z1*=pq.top();
        }
        if(pq1.size()>=2){
            z2=pq1.top();
            pq1.pop();
            z2=z2*pq1.top();
        }
        if(z1>z2){
            cout<<z1<<endl;
        }
        else{
            cout<<z2<<endl;
        }
        }
    }
    return 0;
}
