#include "visualizer.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== СЦЕНАРИЙ: СОРТИРОВКА СЛИЯНИЕМ ===" << endl;
    SortingVisualizer viz(10, 200);
    viz.runSort("merge");
    cout << "Сценарий завершён!" << endl;
    return 0;
}
