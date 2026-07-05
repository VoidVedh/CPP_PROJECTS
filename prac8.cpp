//optimising bubble sort 
//Auth - ved
#include <iostream>
#include <algorithm>
using namespace std;

void Optimised_BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void print_bubble(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4, 1, 7, 3, 7};
    int n = 5;

    Optimised_BubbleSort(arr, n);
    print_bubble(arr, n);
}
