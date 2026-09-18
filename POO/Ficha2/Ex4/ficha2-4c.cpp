#include <iostream>

using namespace std;

void troca(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    int a = 5;
    int b = 10;

    troca(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}