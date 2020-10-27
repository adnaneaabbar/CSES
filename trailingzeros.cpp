/* 
So in general, if you want to count trailing zero in factorial of a number, you have to,
1/ Divide the number by 5, to find out how much 5 factors are present, then,  
2/ Divide the number by 25 to find out how many times 25 are present in a number as it will add extra 5 to number then, 
3/ Divide the number by 125 to find out how many times 125 are present in a number as it will add extra 5 to number and so on.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int d = 5;
    int count = 0;

    while ((n/d) > 0) {
        count += n/d;
        d *= 5;
    }
    cout << count;
    return 0;
}