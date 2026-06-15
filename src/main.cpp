#include "visualizer.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

void showMenu() {
    cout << "\n========================================\n";
    cout << "     ВИЗУАЛИЗАТОР АЛГОРИТМОВ СОРТИРОВКИ      \n";
    cout << "========================================\n";
    cout << " 1. Сортировка пузырьком (Bubble Sort)\n";
    cout << " 2. Сортировка выбором (Selection Sort)\n";
    cout << " 3. Сортировка вставками (Insertion Sort)\n";
    cout << " 4. Быстрая сортировка (Quick Sort)\n";
    cout << " 5. Сортировка слиянием (Merge Sort)\n";
    cout << " 6. Перемешать массив\n";
    cout << " 7. Изменить задержку\n";
    cout << " 8. Изменить размер массива\n";
    cout << " 0. Выход\n";
    cout << "========================================\n";
    cout << "Выберите пункт: ";
}

int main() {
    int size = 20;
    int delay = 100;

    SortingVisualizer visualizer(size, delay);

    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка ввода!\n";
            continue;
        }

        switch (choice) {
        case 1:
            visualizer.runSort("bubble");
            break;
        case 2:
            visualizer.runSort("selection");
            break;
        case 3:
            visualizer.runSort("insertion");
            break;
        case 4:
            visualizer.runSort("quick");
            break;
        case 5:
            visualizer.runSort("merge");
            break;
        case 6:
            visualizer.randomize();
            cout << "Массив перемешан!\n";
            break;
        case 7:
            cout << "Введите задержку в миллисекундах (10-500): ";
            cin >> delay;
            if (delay < 10) delay = 10;
            if (delay > 500) delay = 500;
            visualizer.setDelay(delay);
            cout << "Задержка установлена: " << delay << " мс\n";
            break;
        case 8:
            cout << "Введите новый размер массива (5-50): ";
            cin >> size;
            if (size < 5) size = 5;
            if (size > 50) size = 50;
            visualizer = SortingVisualizer(size, visualizer.getDelay());
            cout << "Размер массива изменён: " << size << "\n";
            break;
        case 0:
            cout << "До свидания!\n";
            return 0;
        default:
            cout << "Неверный пункт меню!\n";
        }
    }

    return 0;
}