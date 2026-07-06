#include<iostream>
#include<algorithm>
using namespace std;

void selection_sort(int arr[], int n) {
    // Outer loop iterates through each position
    for(int i = 0; i < n - 1; i++) {
        int index = i;
        
            for (int j = i + 1; j < n; j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}

int main() {
    int arr[] = {5, 7, 2, 8, 3, 0, 1};
    
        int n = sizeof(arr) / sizeof(arr[0]);
    
    selection_sort(arr, n);
    print(arr, n);
    
    return 0;
}   
