#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    while(n != 1){
        cout << n << " ";
        (n % 2 == 0) ? n /= 2 : n = 3*n + 1;
    }
    cout << 1 << endl; //always ends with 1
}
