#include <iostream>


using namespace std;

int findLastIndex(int* arr, int size) {
    int lastIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 5) {
            lastIndex = i;
        }
    }
    return lastIndex;
}

void swap(int* arr, int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n;
    cout << "����i�� ����i� ������: ";
    cin >> n;

    int* a = new int[n];

    cout << "����i�� �������� ������:\n";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int lastIndex = findLastIndex(a, n);

    if (lastIndex != -1) {
        swap(a, 0, lastIndex);
    }

    int set;
    cout << "����i�� ����� set: ";
    cin >> set;

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > set) {
            sum += a[i];
            count++;
        }
    }

    if (count != 0) {
        cout << "������ ����������� �������i� ������, ��i �i���� ����� set: " << (double)sum / count << endl;
    }
    else {
        cout << "� �����i ���� �������i�, ��i �i���� ����� set." << endl;
    }

    cout << "����� �i��� ��������� ��������:\n";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;
    return 0;
}