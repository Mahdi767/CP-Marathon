/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-25 09:02:55
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
char s1[15],s2[15];
 cin>>s1>>s2;
int n = strlen(s1);
int target =0;// pos from s1
for(int i =0;i<n;i++){
    target+=(s1[i]=='+' ? 1 : -1);
}
int curr =0,mov=0;
for(int  i =0;i<n;i++){
    if(s2[i]=='?'){
mov++;
    }else{
        curr+=(s2[i]=='+' ? 1 : -1);
        
// if (s2[i] == '+') {
//     currentPosition += 1; // Move forward
// } else if (s2[i] == '-') {
//     currentPosition -= 1; // Move backward
// }


    }
}
int dis = target - curr;
double ans = 0.00;
if((dis +mov)%2 !=0 || mov<abs(dis)){
    ans = 0.00;
}else{
    int m = (mov + abs(dis))/2;
    int c =1;
    for (int i = 0; i < m; i++) {
            c *= (mov- i);
            c /= (i + 1);
        }
        ans  =(double)c/(1<<mov);
}
cout.precision(12);
    cout << fixed << ans << endl;
    return 0;
}