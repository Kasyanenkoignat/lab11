#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b;
    cout << "Введiть значення для a: ";
    cin >> a;
    cout << "Введiть значення для b: ";
    cin >> b;

    double* pointer_to_a = &a;
    double* pointer_to_b = &b;

    if (*pointer_to_a > *pointer_to_b) {
        *pointer_to_a += 7;
        *pointer_to_b -= 3;
    }
    else {
        *pointer_to_a -= 3;
        *pointer_to_b += 7;
    }

    cout << "Нове значення для a: " << a << endl;
    cout << "Нове значення для b: " << b << endl;

    return 0;
}
