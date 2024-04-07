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
    cout << "Введiть розмiр масиву: ";
    cin >> n;

    int* a = new int[n];

    cout << "Введiть елементи масиву:\n";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int lastIndex = findLastIndex(a, n);

    if (lastIndex != -1) {
        swap(a, 0, lastIndex);
    }

    int set;
    cout << "Введiть число set: ";
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
        cout << "Середнє арифметичне елементiв масиву, якi бiльше числа set: " << (double)sum / count << endl;
    }
    else {
        cout << "В масивi немає елементiв, якi бiльше числа set." << endl;
    }

    cout << "Масив пiсля виконання операцій:\n";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;
    return 0;
}