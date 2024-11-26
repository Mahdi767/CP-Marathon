/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-17 06:08:10
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  const int max_a =100;
vector<int>count(max_a,0);
int n;
while(cin>>n)
for(int i =0;i<n;i++){
  int age;
  cin>>age;
  count[age]++;
}
for(int age=1;age<max_a;age++){
  for (int i = 0; i < count[age]; i++) {
            cout << age << " ";
        }
}
cout<<endl;
    return 0;
}