/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-26 12:25:45
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>hold(n);
    for(int i =0;i<n;i++){
        cin>>hold[i];
    }
    int org =0;
     for(int i =0;i<n;i++){
org=max(org,hold[i]-hold[i-1]);
    }
    int min_difficulty = INT_MAX;
for(int i = 1;i<n-1;i++){// jehetu first and last fixed
int last =max(org,hold[i+1]-hold[i-1]);
min_difficulty = min(min_difficulty, last); 
}
cout<<min_difficulty;
    return 0;
}