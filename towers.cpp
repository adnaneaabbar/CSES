#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int temp;
    multiset<int> s;
    while(n--){
        cin >> temp;
        auto it = s.lower_bound(temp + 1);
        if(it == s.end()) s.insert(temp);
        else{
            s.erase(it);
            s.insert(temp);
        }
    }

    cout << s.size() << endl;
    return 0;
}
