#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);

    long m = a[n/2];
    long minimalCost = 0;
    for(int i = 0; i < n; i++){
        minimalCost += abs(a[i] - m);
    }

    cout << minimalCost << endl;
    return 0;
}
