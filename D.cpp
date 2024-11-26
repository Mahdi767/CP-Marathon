/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-14 13:17:13
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    string s2;
    cin>>s1>>s2;
     for (char &c : s1) {
        c = tolower(c);
    }
    for (char &c : s2) {
        c = tolower(c);
    }
    stringstream ss(s1);
     stringstream sss(s2);


string word1;
string word2;
while(ss>>word1)
while(sss>>word2)
if(word1==word2){
cout<<"0";
}else if(word1>word2){
    cout<<"1";
}else if(word1<word2){
    cout<<"-1";
}

//      sort(s1.begin(),s1.end());
//      sort(s2.begin(),s2.end());
//      stringstream ss(s1);
//      stringstream sss(s2);
//      string word1;
//      string word2;
//      while(ss>>word1)
// while(sss>>word2)
// if(word1==word2){
//     cout<<"0";
// }else if(word1<word2){
//     cout<<"-1";
// }else if(word1>word2){
//     cout<<"1";
// }
//     return 0;
}