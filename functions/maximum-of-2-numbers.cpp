#include <iostream>

using namespace std;

int our_max(int a, int b);

int main() {
    cout << our_max(2, 5) << endl;
    cout << our_max(2, -5) << endl;

    return 0;
}

int our_max(int a, int b) {
    if (a >= b)
        return a;
    return b;
}