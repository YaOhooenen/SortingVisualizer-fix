#include "visualizer.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
    cout << "=== ТЕСТ ПРОИЗВОДИТЕЛЬНОСТИ ===" << endl;
    vector<int> sizes = { 10, 50, 100, 200 };

    for (int size : sizes) {
        SortingVisualizer viz(size, 0);
        viz.randomize(1, 1000);

        auto start = high_resolution_clock::now();
        viz.bubbleSort();
        auto end = high_resolution_clock::now();

        auto duration = duration_cast<milliseconds>(end - start);
        cout << "Размер: " << size << " | Время: " << duration.count() << " мс" << endl;
    }

    return 0;
}