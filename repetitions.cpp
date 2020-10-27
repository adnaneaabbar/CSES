#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    cin >> s;

    int result = 1;
    int i = 0;

    while(i < s.size()-1){
        int count = 1;

        while(s[i] == s[i+1]){
            count++;
            i++;
        }
        result = max(result, count);
        i++;
    }

    cout << result;
}
