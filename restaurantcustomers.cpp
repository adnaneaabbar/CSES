#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int a, b;
    priority_queue<pair<int, bool>> pq;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        pq.push({-a, true});
        pq.push({-b, false});
    }

    int c = 0;
    int maxi = 0;
    while(!pq.empty()){
        c += get<1>(pq.top()) ? 1 : -1;
        pq.pop();
        maxi = max(maxi, c);
    }

    cout << maxi << endl;
    return 0;
}

