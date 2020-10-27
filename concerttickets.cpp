#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    multiset<int, greater<int>> tickets;
    int temp;
    while (n--) {
        cin >> temp;
        tickets.insert(temp);
    }
    
    //Return type :
    //An iterator to the lower bound of val in the range.
    //If all the element in the range compare less than val, the function returns last.
    //If all the element in the range are larger than val, the function returns pointer to first element.
    
    while(m--){
        cin >> temp;
        auto it = tickets.lower_bound(temp);
        if(it == tickets.end()) cout << -1 << endl;
        else{
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}
