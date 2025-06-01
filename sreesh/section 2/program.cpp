#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;     // 8
    // cout << add("5", "3") << endl; // ❌ Compile error
    return 0;
}
