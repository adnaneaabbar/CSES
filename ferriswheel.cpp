#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int p[n+1];
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    sort(p+1, p+n+1);

    int ferris = 0;
    int left = 1;
    int right = n;
    
    while(left <= right){
        if(p[right] + p[left] > x) right--;
        else{
            left++;
            right--;
        }
        ferris++;
    }

    cout << ferris << endl;
    return 0;
}
