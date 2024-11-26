/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-25 09:51:06
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
      vector<int>a(n);
      for(int i =0;i<n;i++){
        cin>>a[i];
      }  
      sort(a.begin(),a.end());
    
    int cnt=0,solve = 0;
    for(int i =0;i<n;i++){
if(++cnt==a[i]){
    solve++;
    cnt =0;
}
    }
        cout<<solve<<endl;
        }

    return 0;
}