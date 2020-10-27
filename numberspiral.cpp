#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin >> t;
    
    int row, col;
    int a, b;
    for (int i = 0; i < t; i++)
    {
        ll res = 0; //infinite spiral

        cin >> row >> col;
        a = max(row, col);
        b = min(row, col);

        // start at the closest perfect square
        res += 1ll * (a-1) * (a-1);
        if(a == b) res += a;   // we only need one step to get to the tip of the square
        else if (a % 2 == 1) { // on odd you gow down
            if (col == a) res += a * 2 - row; // 2 steps to complete the square and a row back to the number
            else res += col;   // 1 step
        } else {    // on pair you gow right
            if (row == a) res += a * 2 - col; // 2 steps to complete the square and a col back to the number
            else res += row;   // 1 step
        }
        
    cout << res << endl;
    }     
}

