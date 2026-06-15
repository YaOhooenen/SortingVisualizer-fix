#include <gtest/gtest.h>
#include "visualizer.h"
#include <vector>

using namespace std;

TEST(BubbleSortTest, AlreadySortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> sorted = { 10, 20, 30, 40, 50 };
    viz.setArray(sorted);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), sorted);
}

TEST(BubbleSortTest, ReverseSortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> input = { 50, 40, 30, 20, 10 };
    vector<int> expected = { 10, 20, 30, 40, 50 };
    viz.setArray(input);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(BubbleSortTest, SingleElementArray) {
    SortingVisualizer viz(1, 0);
    vector<int> single = { 42 };
    viz.setArray(single);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), single);
}

TEST(BubbleSortTest, EmptyArray) {
    SortingVisualizer viz(0, 0);
    vector<int> empty;
    viz.setArray(empty);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), empty);
}

TEST(BubbleSortTest, AllEqualElements) {
    SortingVisualizer viz(5, 0);
    vector<int> equal = { 7, 7, 7, 7, 7 };
    viz.setArray(equal);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), equal);
}

TEST(BubbleSortTest, ArrayWithNegativeNumbers) {
    SortingVisualizer viz(6, 0);
    vector<int> input = { -5, 10, -3, 0, 8, -1 };
    vector<int> expected = { -5, -3, -1, 0, 8, 10 };
    viz.setArray(input);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(BubbleSortTest, ArrayWithDuplicates) {
    SortingVisualizer viz(9, 0);
    vector<int> input = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    vector<int> expected = { 1, 1, 2, 3, 4, 5, 5, 6, 9 };
    viz.setArray(input);
    viz.bubbleSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(SelectionSortTest, AlreadySortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> sorted = { 10, 20, 30, 40, 50 };
    viz.setArray(sorted);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), sorted);
}

TEST(SelectionSortTest, ReverseSortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> input = { 50, 40, 30, 20, 10 };
    vector<int> expected = { 10, 20, 30, 40, 50 };
    viz.setArray(input);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(SelectionSortTest, SingleElementArray) {
    SortingVisualizer viz(1, 0);
    vector<int> single = { 42 };
    viz.setArray(single);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), single);
}

TEST(SelectionSortTest, EmptyArray) {
    SortingVisualizer viz(0, 0);
    vector<int> empty;
    viz.setArray(empty);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), empty);
}

TEST(SelectionSortTest, AllEqualElements) {
    SortingVisualizer viz(5, 0);
    vector<int> equal = { 7, 7, 7, 7, 7 };
    viz.setArray(equal);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), equal);
}

TEST(SelectionSortTest, ArrayWithNegativeNumbers) {
    SortingVisualizer viz(6, 0);
    vector<int> input = { -5, 10, -3, 0, 8, -1 };
    vector<int> expected = { -5, -3, -1, 0, 8, 10 };
    viz.setArray(input);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(SelectionSortTest, ArrayWithDuplicates) {
    SortingVisualizer viz(9, 0);
    vector<int> input = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    vector<int> expected = { 1, 1, 2, 3, 4, 5, 5, 6, 9 };
    viz.setArray(input);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(InsertionSortTest, AlreadySortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> sorted = { 10, 20, 30, 40, 50 };
    viz.setArray(sorted);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), sorted);
}

TEST(InsertionSortTest, ReverseSortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> input = { 50, 40, 30, 20, 10 };
    vector<int> expected = { 10, 20, 30, 40, 50 };
    viz.setArray(input);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(InsertionSortTest, SingleElementArray) {
    SortingVisualizer viz(1, 0);
    vector<int> single = { 42 };
    viz.setArray(single);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), single);
}

TEST(InsertionSortTest, EmptyArray) {
    SortingVisualizer viz(0, 0);
    vector<int> empty;
    viz.setArray(empty);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), empty);
}

TEST(InsertionSortTest, AllEqualElements) {
    SortingVisualizer viz(5, 0);
    vector<int> equal = { 7, 7, 7, 7, 7 };
    viz.setArray(equal);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), equal);
}

TEST(InsertionSortTest, ArrayWithNegativeNumbers) {
    SortingVisualizer viz(6, 0);
    vector<int> input = { -5, 10, -3, 0, 8, -1 };
    vector<int> expected = { -5, -3, -1, 0, 8, 10 };
    viz.setArray(input);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(InsertionSortTest, ArrayWithDuplicates) {
    SortingVisualizer viz(9, 0);
    vector<int> input = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    vector<int> expected = { 1, 1, 2, 3, 4, 5, 5, 6, 9 };
    viz.setArray(input);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(QuickSortTest, AlreadySortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> sorted = { 10, 20, 30, 40, 50 };
    viz.setArray(sorted);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), sorted);
}

TEST(QuickSortTest, ReverseSortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> input = { 50, 40, 30, 20, 10 };
    vector<int> expected = { 10, 20, 30, 40, 50 };
    viz.setArray(input);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(QuickSortTest, SingleElementArray) {
    SortingVisualizer viz(1, 0);
    vector<int> single = { 42 };
    viz.setArray(single);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), single);
}

TEST(QuickSortTest, EmptyArray) {
    SortingVisualizer viz(0, 0);
    vector<int> empty;
    viz.setArray(empty);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), empty);
}

TEST(QuickSortTest, AllEqualElements) {
    SortingVisualizer viz(5, 0);
    vector<int> equal = { 7, 7, 7, 7, 7 };
    viz.setArray(equal);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), equal);
}

TEST(QuickSortTest, ArrayWithNegativeNumbers) {
    SortingVisualizer viz(6, 0);
    vector<int> input = { -5, 10, -3, 0, 8, -1 };
    vector<int> expected = { -5, -3, -1, 0, 8, 10 };
    viz.setArray(input);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(QuickSortTest, ArrayWithDuplicates) {
    SortingVisualizer viz(9, 0);
    vector<int> input = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    vector<int> expected = { 1, 1, 2, 3, 4, 5, 5, 6, 9 };
    viz.setArray(input);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(MergeSortTest, AlreadySortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> sorted = { 10, 20, 30, 40, 50 };
    viz.setArray(sorted);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), sorted);
}

TEST(MergeSortTest, ReverseSortedArray) {
    SortingVisualizer viz(5, 0);
    vector<int> input = { 50, 40, 30, 20, 10 };
    vector<int> expected = { 10, 20, 30, 40, 50 };
    viz.setArray(input);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(MergeSortTest, SingleElementArray) {
    SortingVisualizer viz(1, 0);
    vector<int> single = { 42 };
    viz.setArray(single);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), single);
}

TEST(MergeSortTest, EmptyArray) {
    SortingVisualizer viz(0, 0);
    vector<int> empty;
    viz.setArray(empty);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), empty);
}

TEST(MergeSortTest, AllEqualElements) {
    SortingVisualizer viz(5, 0);
    vector<int> equal = { 7, 7, 7, 7, 7 };
    viz.setArray(equal);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), equal);
}

TEST(MergeSortTest, ArrayWithNegativeNumbers) {
    SortingVisualizer viz(6, 0);
    vector<int> input = { -5, 10, -3, 0, 8, -1 };
    vector<int> expected = { -5, -3, -1, 0, 8, 10 };
    viz.setArray(input);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(MergeSortTest, ArrayWithDuplicates) {
    SortingVisualizer viz(9, 0);
    vector<int> input = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    vector<int> expected = { 1, 1, 2, 3, 4, 5, 5, 6, 9 };
    viz.setArray(input);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(SelectionSortTest, RandomArray) {
    SortingVisualizer viz(7, 0);
    vector<int> input = { 64, 25, 12, 22, 11, 45, 33 };
    vector<int> expected = { 11, 12, 22, 25, 33, 45, 64 };
    viz.setArray(input);
    viz.selectionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(InsertionSortTest, RandomArray) {
    SortingVisualizer viz(6, 0);
    vector<int> input = { 12, 11, 13, 5, 6, 7 };
    vector<int> expected = { 5, 6, 7, 11, 12, 13 };
    viz.setArray(input);
    viz.insertionSort();
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(QuickSortTest, RandomArray) {
    SortingVisualizer viz(8, 0);
    vector<int> input = { 10, 7, 8, 9, 1, 5, 3, 2 };
    vector<int> expected = { 1, 2, 3, 5, 7, 8, 9, 10 };
    viz.setArray(input);
    viz.quickSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}

TEST(MergeSortTest, RandomArray) {
    SortingVisualizer viz(8, 0);
    vector<int> input = { 38, 27, 43, 3, 9, 82, 10, 1 };
    vector<int> expected = { 1, 3, 9, 10, 27, 38, 43, 82 };
    viz.setArray(input);
    viz.mergeSort(0, viz.getSize() - 1);
    EXPECT_EQ(viz.getArray(), expected);
}
