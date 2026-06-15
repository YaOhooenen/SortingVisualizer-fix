#include "visualizer.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== СЦЕНАРИЙ: СОРТИРОВКА ПУЗЫРЬКОМ ===" << endl;
    SortingVisualizer viz(10, 200);
    viz.runSort("bubble");
    cout << "Сценарий завершён!" << endl;
    return 0;
}