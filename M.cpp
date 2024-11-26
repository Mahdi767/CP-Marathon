/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-26 12:53:02
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> v;
    string in,s; int n,q;
    cin >> n;
    for(int i=0;i<n;++i)
        {
        cin >> in; v.push_back(in);
    }
    
    cin >> q;
    
    while(q--)
        {
        cin >> s;
        cout<<count(v.begin(),v.end(),s)<<endl;
    }
    
    return 0;
}