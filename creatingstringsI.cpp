#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()


int main() {
    
    string s;
    cin >> s;
    //first we sort the string.
    sort(all(s));

    vector<string> res;
    // the STL function next_permutation works lexicographically wit next greatest permutation
    // if string isn't sorted we will have a problem, we won't be able to get all the possible strings
    do {
        res.push_back(s);
    } while (next_permutation(all(s))); // the function returns false if no word is possible.

    cout << res.size() << endl;
    for (string c : res) cout << c << endl;
}