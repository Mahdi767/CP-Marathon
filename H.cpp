/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-26 11:01:53
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,x;
   int dis=1;
   cin>>n>>x;
 vector<int>a(n);
 for(int i =0;i<n;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
dis = 2* max(a[0],x-a[n-1]);
for(int i =0;i<n-1;i++){
    dis=max(dis,a[i+1]-a[i]);
}
 cout << fixed << setprecision(10) << dis / 2.0 << endl;
    return 0;
}