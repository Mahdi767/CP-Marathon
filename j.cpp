/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-16 21:11:12
**/

#include <bits/stdc++.h>
using namespace std;
#define tt long long 
int main() {
   int n,m;
   cin>>n>>m;
   int i =1,b=0;
n=n+1;
if(m>(n-1)){
    cout<<"-1"<<endl;
}
    else if(m>=n/2){
        cout<<m<<endl;
    }

tt a=(n-1)/2;
if(n/2>m){
    while(b<n/2){
        b=m*i;
        i++;
    }
    cout<<b<<endl;
}
}

