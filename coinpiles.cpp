#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    int a, b;
    while (t--){
        cin >> a >> b;
        ((a + b)%3 == 0 && max(a, b) <= min(a, b)*2) ? cout << "YES\n" : cout <<"NO\n";
    }
    return 0;
}