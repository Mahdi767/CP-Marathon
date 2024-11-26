/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-14 13:13:37
**/

#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int sum = sumOfDivisors(n);
        if (isPrime(sum)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
