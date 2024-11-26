/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-14 14:47:41
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
     int n;
     cin>>n;
     int polygon = 180-n;
     //int Fancy = 360 / polygon;
     if(360%polygon==0){
        cout<<"YES"<<endl;
     } else{
        cout<<"NO"<<endl;
     }  
    }
    return 0;
}