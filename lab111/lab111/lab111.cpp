#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double* pointer1, * pointer2;

    pointer1 = new double;
    pointer2 = new double;

    cout << "����i�� �������� ��� ������� ���������: ";
    cin >> *pointer1;

    cout << "����i�� �������� ��� ������� ���������: ";
    cin >> *pointer2;

    cout << "��������� �������� ������� ���������: " << *pointer1 << endl;
    cout << "��������� �������� ������� ���������: " << *pointer2 << endl;

    double* temp = pointer1;
    pointer1 = pointer2;
    pointer2 = temp;

    cout << "���� �������� ������� ���������: " << *pointer1 << endl;
    cout << "���� �������� ������� ���������: " << *pointer2 << endl;

    delete pointer1;
    delete pointer2;

    return 0;
}
