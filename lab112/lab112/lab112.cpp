#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b;
    cout << "����i�� �������� ��� a: ";
    cin >> a;
    cout << "����i�� �������� ��� b: ";
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

    cout << "���� �������� ��� a: " << a << endl;
    cout << "���� �������� ��� b: " << b << endl;

    return 0;
}
