#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    double profits[MONTHS];

    for (int i = 0; i < MONTHS; ++i) {
        cout << "Введіть прибуток за місяць " << i + 1 << ": ";
        cin >> profits[i];
    }

    int start, end;
    cout << "Введіть початок діапазону (1-12): ";
    cin >> start;
    cout << "Введіть кінець діапазону (1-12): ";
    cin >> end;
    
    int maxMonth = start - 1, minMonth = start - 1;
    for (int i = start - 1; i < end; ++i) {
        if (profits[i] > profits[maxMonth]) {
            maxMonth = i;
        }
        if (profits[i] < profits[minMonth]) {
            minMonth = i;
        }
    }

    cout << "Місяць з максимальним прибутком: " << maxMonth + 1 << " (прибуток: " << profits[maxMonth] << ")" << endl;
    cout << "Місяць з мінімальним прибутком: " << minMonth + 1 << " (прибуток: " << profits[minMonth] << ")" << endl;

    return 0;
}
