#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll M = 1000000007;

int modularPow(ll a, ll b, int m)
{
    ll num = 1;
    ll exp = a;
    while (b)
    {
        if (b & 1) num = (num * exp) % m; //si b%2 == 1
        exp = (exp * exp) % m;
        b /= 2; // on divise par 2
    }
    return num;
}

int main()
{

    int n;
    cin >> n;
    cout << modularPow(2, n, M) << endl;
    return 0;
}