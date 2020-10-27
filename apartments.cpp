#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;
using vi = vector<int>;

int main(int argc, char const *argv[]) {
    int n, m, k;
    cin >> n >> m >> k;

    vi a(n);
    vi b(m);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(all(a));
    sort(all(b));

    int i, j, count;
    i = 0; j = 0; count = 0;
    while(i < n && j < m)
    {
        if(b[j] < a[i] - k) j++;
        else if(a[i] + k < b[j]) i++;
        else {
            i++;
            j++;
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}