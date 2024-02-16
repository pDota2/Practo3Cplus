#include <iostream>
#include <locale>
const int ROWS = 3;
const int COLS = 5;
void inputArray(float arr[ROWS][COLS]) {
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            std::cout << "Элемент " << j + 1 << ": ";
            std::cin >> arr[i][j];
        }
    }
}
float averageOfRow(float row[COLS]) {
    float sum = 0.0;
    for (int i = 0; i < COLS; ++i) {
        sum += row[i];
    }
    return sum / COLS;
}
int main() {
    setlocale(LC_ALL, "Russian");
    float arr[ROWS][COLS];
    inputArray(arr);
    std::cout << "\nСредние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        float avg = averageOfRow(arr[i]);
        std::cout << "Строка " << i + 1 << ": " << avg << std::endl;
    }
    return 0;
}
