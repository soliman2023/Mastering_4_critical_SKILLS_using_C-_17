#include <iostream>

using namespace std;

int add(int a, int b) ;
double add(double a, double b);
int add(int a, int b, int c) ;

int main() {
    cout << add(2, 3) << endl;
    cout << add(2.0, 3.5) << endl;
    cout << add(2, 3, 5) << endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}