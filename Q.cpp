/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-14 16:29:54
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int velo, ti;
    while (cin >> velo >> ti) {
        if (velo && ti)
            cout << (2 * velo * ti) << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
