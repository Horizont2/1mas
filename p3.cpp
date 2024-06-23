#include <iostream>
using namespace std;

int main() {
    const int SIDES = 5;
    double sides[SIDES];
    for (int i = 0; i < SIDES; ++i) {
        cout << "Введіть довжину сторони " << i + 1 << ": ";
        cin >> sides[i];
    }

    double perimeter = 0;
    for (int i = 0; i < SIDES; ++i) {
        perimeter += sides[i];
    }

    cout << "Периметр п'ятикутника: " << perimeter << endl;

    return 0;
}
