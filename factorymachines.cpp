#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long k = 1;
    while (true)
    {
        long long lim = 0;
        for (int x : v)
            lim += k / x;
        k++;
        if (c >= t)
            break;
    }
    long long ans = 0;

    return 0;
}
