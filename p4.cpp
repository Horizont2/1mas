#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    double profits[MONTHS];
    
    for (int i = 0; i < MONTHS; ++i) {
        cout << "Введіть прибуток за місяць " << i + 1 << ": ";
        cin >> profits[i];
    }

    int maxMonth = 0, minMonth = 0;
    for (int i = 1; i < MONTHS; ++i) {
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
