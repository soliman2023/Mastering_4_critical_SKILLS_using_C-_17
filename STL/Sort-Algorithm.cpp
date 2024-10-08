#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &v) {
    for (auto x: v)
        cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v(5);

    for (int i = 0; i < (int) v.size(); ++i) {
        v[i] = 10 - i;
    }

    print(v);   // 10 9 8 7 6

    sort(v.begin() + 1, v.end()); // Sort from v[1] to v[size-1]
    print(v); // 10 6 7 8 9

    sort(v.begin(), v.end()); // sort from v[0] to v[size-1]
    print(v); //6 7 8 9 10

    sort(v.rbegin(), v.rend()); // sort from v[0] to v[size-1] reversed
    print(v); // 10 9 8 7 6

    return 0;
}