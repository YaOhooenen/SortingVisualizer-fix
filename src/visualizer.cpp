#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#undef byte
#else
#include <unistd.h>
#endif

#include "visualizer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;

SortingVisualizer::SortingVisualizer(int size, int delay) : delay_ms(delay) {
    srand(static_cast<unsigned>(time(nullptr)));
    arr.resize(size);
    randomize();
}

void SortingVisualizer::randomize(int minVal, int maxVal) {
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
    clearScreen();
    display();
}

void SortingVisualizer::clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void SortingVisualizer::display() const {
    cout << "Размер массива: " << arr.size() << "  |  Задержка: " << delay_ms << " мс\n";
    cout << "------------------------------------------------------------\n";

    if (arr.empty()) {
        cout << "(массив пуст)\n";
        return;
    }

    int maxVal = *max_element(arr.begin(), arr.end());
    if (maxVal <= 0) maxVal = 1;
    int height = 20;

    for (int row = height; row > 0; row--) {
        for (int i = 0; i < static_cast<int>(arr.size()); i++) {
            int barHeight = (arr[i] * height) / maxVal;
            if (barHeight >= row) {
                cout << "█";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        cout << arr[i];
        if (arr[i] < 10) cout << " ";
    }
    cout << "\n";
}

void SortingVisualizer::sleep() const {
    this_thread::sleep_for(chrono::milliseconds(delay_ms));
}

void SortingVisualizer::bubbleSort() {
    int n = static_cast<int>(arr.size());
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                clearScreen();
                display();
                sleep();
            }
        }
    }
}

void SortingVisualizer::selectionSort() {
    int n = static_cast<int>(arr.size());
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
            clearScreen();
            display();
            sleep();
        }
    }
}

void SortingVisualizer::insertionSort() {
    int n = static_cast<int>(arr.size());
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            clearScreen();
            display();
            sleep();
        }
        arr[j + 1] = key;
        clearScreen();
        display();
        sleep();
    }
}

void SortingVisualizer::quickSort(int left, int right) {
    if (left >= right) return;

    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
            clearScreen();
            display();
            sleep();
        }
    }
    swap(arr[i + 1], arr[right]);
    clearScreen();
    display();
    sleep();

    quickSort(left, i);
    quickSort(i + 2, right);
}

void SortingVisualizer::mergeSort(int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);

    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int t = 0; t < k; t++) {
        arr[left + t] = temp[t];
        clearScreen();
        display();
        sleep();
    }
}

void SortingVisualizer::setDelay(int delay) {
    delay_ms = delay;
}

int SortingVisualizer::getDelay() const {
    return delay_ms;
}

vector<int> SortingVisualizer::getArray() const {
    return arr;
}

int SortingVisualizer::getSize() const {
    return static_cast<int>(arr.size());
}

void SortingVisualizer::setArray(const vector<int>& newArr) {
    arr = newArr;
}

void SortingVisualizer::runSort(const string& algorithm) {
    clearScreen();
    display();
    sleep();

    if (algorithm == "bubble") {
        bubbleSort();
    }
    else if (algorithm == "selection") {
        selectionSort();
    }
    else if (algorithm == "insertion") {
        insertionSort();
    }
    else if (algorithm == "quick") {
        quickSort(0, static_cast<int>(arr.size()) - 1);
    }
    else if (algorithm == "merge") {
        mergeSort(0, static_cast<int>(arr.size()) - 1);
    }
    else {
        cout << "Неизвестный алгоритм!\n";
        return;
    }

    cout << "\n========== СОРТИРОВКА ЗАВЕРШЕНА! ==========\n";
}