#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()


int main() {
    
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);

    int distinct = 1;
    for (int i = 0; i < n-1; i++)
    {
        if((a[i+1] - a[i]) >= 1) distinct++;
    }

    cout << distinct << endl;
    
    return 0;
}