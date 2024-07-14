#include<iostream>
using namespace std;

void printCounts(int arr[], int size) {
    // Array to keep track of counted elements
    bool counted[size] = {false};
    
    for (int i = 0; i < size; i++) {
        // If this element has already been counted, skip it
        if (counted[i])
            continue;
        
        int count = 1; // Start counting the current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = true; // Mark this element as counted
            }
        }
        cout << "Element: " << arr[i] << " Count: " << count << endl;
    }
}

int main() {
    int a[5] = {1, 2, 2, 3, 4};
    
    printCounts(a, 5);

    return 0;
}
