#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    int t; cin >> t;
    int num; cin >> num;
    rep(i, t) {
        int x; cin >> x;
        if (x != num) {
            cout << x << " ";
        }
    }

}