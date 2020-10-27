// Note that when we have two knights threatening each other, it actually forms either a 2×3 or 3×2 board.
// And for each of 2×3 and 3×2 boards, there are 2 ways of placing two knights so that they threaten each other.
// So, what we should do is to count how many 2×3 and 3×2 squares on n×n board.
// For general n, the answer is
// (n−1)(n−2) + (n−2)(n−1) = 2(n−1)(n−2)
// And for each 2×3 and 3×2 board, there are 2 ways of placing the knights so that they threaten each other.
// Therefore, in total there are 2 x 2(n−1)(n−2) = 4(n−1)(n−2)
// ways of placing two knights so that they threaten each other.
// So what you are looking for is n²(n²−1)/2 − 4(n−1)(n−2)

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int n;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        cout << (1ll * k*k * 1ll * (k*k - 1) / 2) - (4* 1ll * (k-1) * (k-2)) << endl;
    }     
}

