#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // fixed heap allocation

    for (int i = 0; i < 5; i++)
        arr[i] = (i + 1) * 10;

    cout << "Fixed Heap Dynamic Array:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    delete[] arr; // free memory
    return 0;
}
