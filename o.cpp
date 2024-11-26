/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-16 12:33:24
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,d;
cin>>n>>d;
vector<int>a(n);
for(int i =0;i<n;i++){
    cin>>a[i];
}d %= n;

vector<int>temp(n);
for(int i =0;i<n;i++){
    
    temp[i] = a[(d + i) % n];


}

for(int i =0;i<n;i++){
 a[i]=temp[i];
}
for(int i =0;i<n;i++){
cout<<a[i]<<" ";
}
    return 0;
}