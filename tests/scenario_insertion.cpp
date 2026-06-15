#include "visualizer.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== СЦЕНАРИЙ: СОРТИРОВКА ВСТАВКАМИ ===" << endl;
    SortingVisualizer viz(10, 200);
    viz.runSort("insertion");
    cout << "Сценарий завершён!" << endl;
    return 0;
}
