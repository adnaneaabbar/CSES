#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll sum = 1ll * n * (n + 1) / 2; // sum of all number from 1 to n
    if (sum % 2) cout << "NO\n";
    else {
        sum /= 2; // working with half the sum
        vector<int> v;
        ll temp = 0;
        ll diff = 0;
        int i = n;
        //the idea is to put in a vector element by element as long as we're still under the half of the sum of the elements by decreasing order
        while (true) {
            v.push_back(i);
            temp += i--;
            diff = sum - temp;
            if (diff == 0) break; 
            if (diff <= i) { // arrived at the last number
                v.push_back(diff);
                break;
            }
        }
        cout << "YES\n";
        cout << v.size() << endl;

        for (int j = 0; j < v.size(); j++) { //printing the vector's elements
            cout << v[j];
            if (j < v.size() - 1) cout << " ";
        }
        cout << endl;


        cout << n - v.size() << endl;
        for (ll j = i; j > 0; j--) { //starting by i, the element we jumped over
            if (j == diff) continue; //we skip the last element we inserted in the first set
            cout << j;
            if ((diff != 1 && j > 1) || (diff == 1 && j > 2)) cout << " "; //spacing problem
        }
        cout << endl;
    }
}
