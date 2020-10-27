#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int a, b;
    vector<pii> mov(n);
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        mov[i] = {b, a};
    }
    
    sort(mov.begin(), mov.end());

    int finish = 0;
    int res = 0;
    for(pii p : mov){
        tie(b, a) = p;
        if(a >= finish){
            finish = b;
            res++;
        }
    }

    cout << res << endl;
    return 0;
}