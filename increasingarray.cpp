#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    ll result = 0;

    int n;
    cin >> n;
    ll a, b;

    cin >> a;

    for(int i = 1; i < n; i++){
        cin >> b;
        if(b < a){
            result += abs(a - b);
            continue; //with same value of a
        }
        a = b; //with value of b
    }
    cout << result;
}
