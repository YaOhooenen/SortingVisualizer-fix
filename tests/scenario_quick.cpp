#include "visualizer.h"
#include <iostream>

using namespace std;

int main() {
    cout << "=== СЦЕНАРИЙ: БЫСТРАЯ СОРТИРОВКА ===" << endl;
    SortingVisualizer viz(10, 200);
    viz.runSort("quick");
    cout << "Сценарий завершён!" << endl;
    return 0;
}
