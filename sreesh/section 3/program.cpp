#include <iostream>
using namespace std;

int main() {
    int* arr = new int[1000];  // Dynamically allocated array
    for (int i = 0; i < 1000; i++) {
        arr[i] = i;
    }
    cout << "Array allocated" << endl;

    delete[] arr;  // Must free manually
    cout << "Memory freed" << endl;

    return 0;
}
