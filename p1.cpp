#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 6;
    double profits[MONTHS];

    for (int i = 0; i < MONTHS; ++i) {
        cout << "Введіть прибуток за місяць " << i + 1 << ": ";
        cin >> profits[i];
    }

    double totalProfit = 0;
    for (int i = 0; i < MONTHS; ++i) {
        totalProfit += profits[i];
    }

    cout << "Загальний прибуток за 6 місяців: " << totalProfit << endl;

    return 0;
}
