#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 0) {
        return 0;
    } else {
        return f(n - 1) + f(n - 2);
    }
}

int main() {
    cout << f(9);
    return 0;
}
