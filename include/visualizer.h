#ifndef VISUALIZER_H
#define VISUALIZER_H

#include <vector>
#include <string>

using namespace std;

class SortingVisualizer {
private:
    vector<int> arr;
    int delay_ms;

    void clearScreen();
    void display() const;
    void sleep() const;

public:
    SortingVisualizer(int size, int delay = 100);

    void randomize(int min = 10, int max = 99);

    void bubbleSort();
    void quickSort(int left, int right);
    void mergeSort(int left, int right);
    void selectionSort();
    void insertionSort();

    void setDelay(int delay);
    int getDelay() const;

    vector<int> getArray() const;
    int getSize() const;
    void setArray(const vector<int>& newArr);

    void runSort(const string& algorithm);
};

#endif