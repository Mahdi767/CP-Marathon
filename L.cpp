/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-14 15:20:49
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int cnt1=0;
  
 vector<int> a(n); 
  for(int i =0;i<n;i++){
    cin>>a[i];
  }
 for(int i =0;i<n;i++){
    if(a[i]==1){
        cout<<"HARD";
        return 0;
    }}cout<<"EASY"<<endl;

    return 0;
}