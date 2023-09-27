#include <iostream>
using namespace std;
int main() {
    int arr[] = {12, 3, 1, 15, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  

    if (k >= 1 && k <= size) {
        int kthMin, kthMax;

        // Initialize kthMin and kthMax with extreme values
    int max = INT_MAX;
    int min = INT_MIN;

        for (int i = 0; i < size; ++i) {
            // Find the kth minimum element
            if (arr[i] > min) {
                for (int j = 0; j < size; ++j) {
                    if (arr[j] < arr[i]) {
                        min = arr[j];
                    }
                }
            }

            // Find the kth maximum element
            if (arr[i] < max) {
                for (int j = 0; j < size; ++j) {
                    if (arr[j] > arr[i]) {
                        max = arr[j];
                    }
                }
            }
        }

        kthMin = min;
        kthMax = max;

        // Print the kth minimum and kth maximum elements
       cout << k << "th minimum element: " << kthMin <<endl;
       cout << k << "th maximum element: " << kthMax <<endl;
    } else {
       cout << "Invalid value of k." <<endl;
    }

    return 0;
}
