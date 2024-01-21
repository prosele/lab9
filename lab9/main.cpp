#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <typename T>
T sum(T* array, size_t count) {
    T result = 0;
    for (int i = 0; i < count; i++) {
        result += array[i];
    }
    return result;
}
template <>
string sum <string> (string* array, size_t count) {
    long long result = 0;
    for (int i = 0; i < count; i++) {
        result += stoll(array[i]);
    }
    return to_string(result);
}

int main() {
    size_t count = 10;
    int intArray[] = {200, 14, 3, 8456, 0, -889, -7, -100, 55, -92};
    double doubleArray[] = {1888.13716, 1973.54173, 1613.49, 565.630606, 1901.4047, 1746.593, -198.15658, 1505.3908882222, 1419.934497, 1221.7832916517};
    string stringArray[] = {"23", "-800", "2956", "0", "13250", "-8888", "9263", "1", "84", "-39"};
    cout << "Сумма чисел из массива целых чисел: " << sum(intArray, count) << endl;
    cout << fixed << setprecision(11);
    cout << "Сумма чисел из массива вещественных чисел: " << sum(doubleArray, count) << endl;
    cout << "Сумма чисел из массива строк: " << sum(stringArray, count) << endl;
    return 0;
}
