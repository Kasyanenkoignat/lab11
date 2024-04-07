#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double* pointer1, * pointer2;

    pointer1 = new double;
    pointer2 = new double;

    cout << "Введiть значення для першого покажчика: ";
    cin >> *pointer1;

    cout << "Введiть значення для другого покажчика: ";
    cin >> *pointer2;

    cout << "Початкове значення першого покажчика: " << *pointer1 << endl;
    cout << "Початкове значення другого покажчика: " << *pointer2 << endl;

    double* temp = pointer1;
    pointer1 = pointer2;
    pointer2 = temp;

    cout << "Нове значення першого покажчика: " << *pointer1 << endl;
    cout << "Нове значення другого покажчика: " << *pointer2 << endl;

    delete pointer1;
    delete pointer2;

    return 0;
}
