#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int arr[SIZE];
    cout << "Введіть 6 елементів масиву:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }
    cout << "Масив у зворотному порядку:" << endl;
    for (int i = SIZE - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
