#include <iostream>
#include <limits>
#include <cmath> // for pow function

using namespace std;

void printInPowerFormat(long long num) {
    if (num == 0) {
        cout << "0";
        return;
    }

    bool isNegative = (num < 0);
    if (isNegative)
        num = -num;

    int exponent = log2(num);
    if (isNegative)
        cout << "-";

    cout << "2^" << exponent;
}

int main() {
    cout << "Minimum value of int: ";
    printInPowerFormat(numeric_limits<int>::min());
    cout << endl;

    cout << "Maximum value of int: ";
    printInPowerFormat(numeric_limits<int>::max());
    cout << endl;

    cout << "Minimum value of long long: ";
    printInPowerFormat(numeric_limits<long long>::min());
    cout << endl;

    cout << "Maximum value of long long: ";
    printInPowerFormat(numeric_limits<long long>::max());
    cout << endl;

    return 0;
}
