#include <iostream>
using namespace std;

void reverse(int a[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements to reverse: ";
    cin >> n;

    int a[5] = {1, 2, 3, 4, 5};

    

    reverse(a, n);

    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
