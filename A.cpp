/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-13 12:31:35
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
int main() {
ll n;
cin>>n;
ll a = ( n * (n + 1) / 2) % MOD;
ll b=1;
for(ll i =0;i<n;i++){
    b=(b*n)%MOD;
}

ll c=1;
for(ll i=1;i<=n;i++){
c=(c*=i)%MOD;
}
ll d1=1,d2=1;
for(ll i =0;i<n;i++){
    d1 =(d1*2)%MOD;
    d2=(d2*3)%MOD;
}
ll d=(d1+d2)%MOD;

cout<<a<<" "<<b<<" "<<c<<" "<<d;


}