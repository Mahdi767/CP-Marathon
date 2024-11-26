/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-21 21:06:24
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 
while(cin>>n){
     int cnt=0;
vector<int>b(n);
 for(int i =0;i<n;i++){
 
    cin>>b[i];
 }

 for(int i =0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(b[i]>b[j]){
cnt++;
        }
    }
 }
 cout<<"Minimum exchange operations : "<<cnt<<endl;
}
    return 0;
}