#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(0));

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100; // випадкові числа від 0 до 99
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int min = arr[0], max = arr[0];
    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Мінімальний елемент: " << min << endl;
    cout << "Максимальний елемент: " << max << endl;

    return 0;
}
