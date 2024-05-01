#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

int main() {
    SetConsoleOutputCP(1251); // Установка кодировки Windows-1251
    SetConsoleCP(1251);   // эти строчки кода не относяться к решению задачи, они нужны мне для верного отображения вывода кириллицы
    int min = 99999;
    vector<int> numbers; // Создаем пустой вектор для хранения чисел

    cout << "Введите числа (для завершения введите нечисловой символ):" << endl;

    int num;
    while (cin >> num) { // Считываем числа до тех пор, пока возможно считать int
        numbers.push_back(num); // Добавляем считанное число в конец вектора
    }
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    for (int del = 2; del <= min; del ++) {
        int check = 0;
        for (int i = 0; i < numbers.size(); ++i) {
            if (numbers[i] % del == 0) {
                check++;
            }
        }
        if (check == numbers.size()) {
            cout << del << " ";
        }

    }
    cout << " это общие делители ";

    return 0;
}