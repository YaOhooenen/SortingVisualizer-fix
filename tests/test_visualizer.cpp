#include <gtest/gtest.h>
#include "visualizer.h"
#include <vector>

using namespace std;

TEST(VisualizerTest, ConstructorCreatesCorrectSize) {
    SortingVisualizer viz(15, 100);
    EXPECT_EQ(viz.getSize(), 15);
}

TEST(VisualizerTest, SetDelayWorks) {
    SortingVisualizer viz(10, 50);
    viz.setDelay(200);
    EXPECT_EQ(viz.getDelay(), 200);
}

TEST(VisualizerTest, SetDelayWithZeroValue) {
    SortingVisualizer viz(10, 50);
    viz.setDelay(0);
    EXPECT_EQ(viz.getDelay(), 0);
}

TEST(VisualizerTest, RandomizeChangesArray) {
    SortingVisualizer viz(10, 0);
    vector<int> before = viz.getArray();
    viz.randomize();
    vector<int> after = viz.getArray();
    EXPECT_NE(before, after);
}

TEST(VisualizerTest, RandomizePreservesSize) {
    SortingVisualizer viz(10, 0);
    int size = viz.getSize();
    viz.randomize();
    EXPECT_EQ(viz.getSize(), size);
}

TEST(VisualizerTest, RandomizeValuesWithinRange) {
    SortingVisualizer viz(100, 0);
    viz.randomize(10, 99);
    vector<int> arr = viz.getArray();

    for (int val : arr) {
        EXPECT_GE(val, 10);
        EXPECT_LE(val, 99);
    }
}

TEST(VisualizerTest, SetArrayWorks) {
    SortingVisualizer viz(5, 0);
    vector<int> custom = { 100, 200, 300, 400, 500 };
    viz.setArray(custom);
    EXPECT_EQ(viz.getArray(), custom);
}