#include<bits/stdc++.h>

using namespace std;

const int N = 2*100000 + 2;
int exist[N] = {};

int main()
{
    int n;
    int temp;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        exist[temp]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if(!exist[i]){
            cout << i;
            break;
        }
    }
}
