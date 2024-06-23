#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Введіть кількість елементів масиву: ";
    cin >> N;

    vector<double> arr(N);

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    double sumNeg = 0;
    double prodBetweenMinMax = 1;
    double prodEvenIndex = 1;
    double sumBetweenFirstLastNeg = 0;

    int minIndex = 0, maxIndex = 0;
    int firstNegIndex = -1, lastNegIndex = -1;

    for (int i = 0; i < N; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < 0) {
            if (firstNegIndex == -1) {
                firstNegIndex = i;
            }
            lastNegIndex = i;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            sumNeg += arr[i];
        }
    }

    int start = min(minIndex, maxIndex) + 1;
    int end = max(minIndex, maxIndex);
    for (int i = start; i < end; ++i) {
        prodBetweenMinMax *= arr[i];
    }

    for (int i = 0; i < N; i += 2) {
        prodEvenIndex *= arr[i];
    }

    if (firstNegIndex != -1 && lastNegIndex != -1 && firstNegIndex != lastNegIndex) {
        for (int i = firstNegIndex + 1; i < lastNegIndex; ++i) {
            sumBetweenFirstLastNeg += arr[i];
        }
    }

    cout << "Сума від'ємних елементів: " << sumNeg << endl;
    cout << "Добуток елементів між min і max: " << prodBetweenMinMax << endl;
    cout << "Добуток елементів з парними номерами: " << prodEvenIndex << endl;
    cout << "Сума елементів між першим і останнім від'ємними елементами: " << sumBetweenFirstLastNeg << endl;
    return 0;
}
