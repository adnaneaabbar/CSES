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
    long currentMax = a[0];
    long globalMax = a[0];
    for(int i = 1; i < n; i++){
        currentMax = max(currentMax + a[i], a[i]);
        if(currentMax > globalMax) globalMax = currentMax;
    }

    cout << globalMax << endl;
    return 0;
}