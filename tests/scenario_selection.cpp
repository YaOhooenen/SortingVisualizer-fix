#include "visualizer.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== СЦЕНАРИЙ: СОРТИРОВКА ВЫБОРОМ ===" << endl;
    SortingVisualizer viz(10, 200);
    viz.runSort("selection");
    cout << "Сценарий завершён!" << endl;
    return 0;
}
