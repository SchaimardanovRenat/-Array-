#include <iostream>
#include <locale>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 5;
    double array[rows][cols];

    setlocale(LC_ALL, "Russian"); 
    for (int i = 0; i < rows; i++) {
        cout << "Введите элементы для строки " << i + 1 << ":" << endl;
        for (int j = 0; j < cols; j++) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        double sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        double average = sum / cols;
        cout << "Среднее арифметическое для строк " << i + 1 << ": " << average << endl;
    }

    return 0;
}
